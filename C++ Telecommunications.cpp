#include <iostream>
#include <string>
#include <cctype>
#include <limits>

bool isValidNumber(const std::string& input) {
    if (input.length() != 9) {  
        return false;  
    }
    
    for (char c : input) {
        if (!std::isdigit(c)) {  
            return false;  
        }
    }
    return true;  
}

int main() {
    std::cout << "Welcome to C++ Telecommunications" << std::endl;

    int pass_number = 0;
    int pass_message = 0;
    int choice;

    do {
        std::string number;
        std::cout << "A phone number can only contain 9 digits" << std::endl;
        std::cout << "Enter your phone number: " << std::endl;
        std::cin >> number;
        
        if (isValidNumber(number)) {
            std::cout << "Your number is: " << number << std::endl;
            pass_number = 1;  
        } else {
            std::cout << "Number must contain only digits! " << std::endl;
            std::cout << "Number cannot contain more or less than 9 digits!" << std::endl;
        }
    } while (pass_number != 1);
    
    double credit = 0;
    int message_credit_take = 6;

    do {
        std::cout << "1. Message" << std::endl;
        std::cout << "2. Check credit" << std::endl;
        std::cout << "3. Add credit" << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::string numba, message;

        if (choice == 1) {
            do {
                std::cout << "Enter a number to message: " << std::endl;
                std::cin >> numba;
                
                if (isValidNumber(numba)) {
                    pass_message = 1;  
                } else {
                    std::cout << "A number can only contain digits!" << std::endl;
                    std::cout << "A number cannot contain more or less than 9 digits!" << std::endl;
                }
            } while (pass_message != 1);
            
            std::cout << "Enter your message: " << std::endl;
            std::cin.ignore();  
            std::getline(std::cin, message);
            
            if (credit >= message_credit_take) {
                credit -= message_credit_take;  
                std::cout << "Your message was sent to: " << numba << std::endl;
                std::cout << "Message: " << message << std::endl;  
                std::cout << "You have " << credit << "$ of credit remaining" << std::endl;
            } else {
                std::cout << "You need more credit to send a message!" << std::endl;
            }
        }
        
        else if (choice == 2) {
            std::cout << "Your credit is: " << credit << std::endl;
        }
        else if (choice == 3) {
            double amount;
            std::cout << "Enter how much you want to add to your credit: " << std::endl;
            std::cin >> amount;
            std::cout << amount << "$ added to your credit amount" << std::endl;
            credit += amount;
        }
        else if (choice == 4) {
            std::cout << "Thank you for visiting! Have a nice day!" << std::endl;
        }
        else {
            std::cout << "Error: Invalid choice" << std::endl;
        }

    } while (choice != 4);

    return 0;
}
