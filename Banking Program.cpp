#include <iostream>
#include <iomanip>

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    
    double amount = 0;

    std::cout << "Enter how much you would like to deposit: ";
    std::cin >> amount;

    return 0;
}
double withdraw(double balance){
    return 0;
}

int main() 
{
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n"; 
        std::cout << "******************\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
    
        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    break;
            case 3: balance -= withdraw(balance);
                    break;
            case 4: std::cout << "Thanks for visiting!\n";
                    break;
            default: std::cout << "Invalid choice\n";
        }

    }while(choice != 4);
    
     
    return 0;
}