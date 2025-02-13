#include <iostream>
#include <string>

int main() {
    int choice;
    int LookPasswordChoice;
    int SetPasswordChoice;
    std::string Password1 = "Empty Password";
    std::string Password2 = "Empty Password";
    std::string Password3 = "Empty Password";
    std::string Password4 = "Empty Password";
    std::string Password5 = "Empty Password";

    std::cout << "********************" << std::endl;
    std::cout << "C++ Password manager" << std::endl;
    std::cout << "********************" << std::endl;

    do {
        std::cout << "                          " << std::endl;
        std::cout << " *************************" << std::endl;
        std::cout << "1. Look at saved passwords" << std::endl;
        std::cout << "2. Set new password" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << " *************************" << std::endl;

        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Select what password you want to check" << std::endl;
            std::cout << "1. Password (1)" << std::endl;
            std::cout << "2. Password (2)" << std::endl;
            std::cout << "3. Password (3)" << std::endl;
            std::cout << "4. Password (4)" << std::endl;
            std::cout << "5. Password (5)" << std::endl;

            std::cout << "Enter your choice: " << std::endl;
            std::cin >> LookPasswordChoice;

            if (LookPasswordChoice == 1) {
                std::cout << "                 " << std::endl;
                std::cout << "The password is: " << Password1 << std::endl;
            }
            if (LookPasswordChoice == 2) {
                std::cout << "                 " << std::endl;
                std::cout << "The password is: " << Password2 << std::endl;
            }
            if (LookPasswordChoice == 3) {
                std::cout << "                 " << std::endl;
                std::cout << "The password is: " << Password3 << std::endl;
            }
            if (LookPasswordChoice == 4) {
                std::cout << "                 " << std::endl;
                std::cout << "The password is: " << Password4 << std::endl;
            }
            if (LookPasswordChoice == 5) {
                std::cout << "                 " << std::endl;
                std::cout << "The password is: " << Password5 << std::endl;
            }

        }

        if (choice == 2) {
            std::cout << "Select what you want to change" << std::endl;
            std::cout << "1. Password (1)" << std::endl;
            std::cout << "2. Password (2)" << std::endl;
            std::cout << "3. Password (3)" << std::endl;
            std::cout << "4. Password (4)" << std::endl;
            std::cout << "5. Password (5)" << std::endl;

            std::cout << "Enter your choice: " << std::endl;
            std::cin >> SetPasswordChoice;

            
            std::cin.ignore();

            if (SetPasswordChoice == 1) {
                std::cout << "Enter what you want to change your password to: " << std::endl;
                std::getline(std::cin, Password1); 
            }
            if (SetPasswordChoice == 2) {
                std::cout << "Enter what you want to change your password to: " << std::endl;
                std::getline(std::cin, Password2);
            }
            if (SetPasswordChoice == 3) {
                std::cout << "Enter what you want to change your password to: " << std::endl;
                std::getline(std::cin, Password3);
            }
            if (SetPasswordChoice == 4) {
                std::cout << "Enter what you want to change your password to: " << std::endl;
                std::getline(std::cin, Password4);
            }
            if (SetPasswordChoice == 5) {
                std::cout << "Enter what you want to change your password to: " << std::endl;
                std::getline(std::cin, Password5);
            }
        }
    } while (choice != 3);

    return 0;
}
