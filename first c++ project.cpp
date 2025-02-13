#include <iostream>
#include <string>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter an operator (+,-,*,/): " << endl;
    cin >> op;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (op == '+') {
        cout << num1 + num2;
    }
    else if (op == '-') {
        cout << num1 - num2;
    }
    else if (op == '*') {
        cout << num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0) 
            cout << num1 / num2;
        else {
            cout << "Error: Dividing with zero is not allowed" << endl;
        }
    }
    else {
        cout << "Error: Invalid operator" << endl;
    }

    return 0;
}
