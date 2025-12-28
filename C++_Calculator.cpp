#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    
    int num1, num2;
    char oper;

    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter Operator: ";
    cin >> oper;

    if (num2 == 0 && oper == '/') {
        cout << "Cannot divide by zero";
    } else {
        switch (oper) {
            case '+': cout << num1 << " + " << num2 << " = " << num1 + num2; break;
            case '-': cout << num1 << " - " << num2 << " = " << num1 - num2; break;
            case '*': cout << num1 << " * " << num2 << " = " << num1 * num2; break;
            case '/': cout << num1 << " / " << num2 << " = " << num1 / num2; break;
            default:  cout << "Invalid operator"; 
        }
    }
    return 0;
}
