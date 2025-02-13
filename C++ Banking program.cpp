#include <iostream>
#include <string>

int main() {
    int choice;
    double balance = 0.00;
    double DepositAmount;
    double WithdrawAmount;
    std::string  username = "Vuk::Mitic";
    std::string password = "C++::Bank";
    std::string EnteredUsername;
    std::string EnteredPassword;


    std::cout << "*******************" << std::endl;
    std::cout << "C++ Banking program" << std::endl;
    std::cout << "*******************" << std::endl;
    
    
    
    std::cout << "*****" << std::endl;
    std::cout << "Login" << std::endl;
    std::cout << "*****" << std::endl;

        do
        {
        std::cout << "Enter your username: " << std::endl;
        std::cin >> EnteredUsername;
        } while (EnteredUsername != username);
        
        do
        {
        std::cout << "                     " << std::endl;
        std::cout << "Enter your password: " << std::endl;
        std::cin >> EnteredPassword;
        } while (EnteredPassword != password);

    std::cout << "*******************" << std::endl;
    std::cout << "C++ Banking program" << std::endl;
    std::cout << "*******************" << std::endl;

    do
    {
    std::cout << "    " << std::endl;
    std::cout << "****************" << std::endl;
    std::cout << "1. Check balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "****************" << std::endl;
    std::cout << "Enter your choice: " << std::endl;
    std::cin >> choice;

        if (choice == 1) {
            std::cout << "Your balance is: " << balance << "$" << std::endl;
        }
        else if (choice == 2) {
            std::cout << "Enter the amount you want to deposit: " << std::endl;
            std::cin >> DepositAmount;
            std::cout << " " << std::endl;
            std::cout << DepositAmount << "$ Added to your balance" << std::endl;
            balance += DepositAmount;
        }
        else if (choice == 3) {
                do
                {
                std::cout << "Enter the amount you want to withdraw: " << std::endl;
                std::cin >> WithdrawAmount;
                } while ((WithdrawAmount < 0));
            
                std::cout << WithdrawAmount << "$ Withdrawed from your balance" << std::endl;
                balance -= WithdrawAmount;
        }
        else {
            std::cout << "Invalid choice" << std::endl;
        }

    } while (choice != 4);
    
    

    return 0;
}