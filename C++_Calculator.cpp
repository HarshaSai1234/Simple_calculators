#include <iostream>

int main()
{
    std::cout<<"Hello World";
    int num1,num2;
    char oper;
    std::cout << "\nEnter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter Operator: ";
    std::cin >> oper;
    if(num2==0 && oper=='/'){
        std::cout << "Cannot divide by zero";
    }
    else{
        switch(oper){
            case '+': std::cout << num1 << " + " << num2 << " = " << (num1+num2);
                    break;
            case '-' : std::cout << num1 << " - " << num2 << " = " << (num1-num2);
                    break;
            case '*' : std::cout << num1 << " * " << num2 << " = " << (num1*num2);
                    break;
            case '/' : std::cout << num1 << " / " << num2 << " = " << (num1/num2);
                    break;
            default: std::cout << "Invalid operator";
                    break;
        }
    }
    return 0;
}