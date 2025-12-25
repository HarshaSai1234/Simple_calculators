#include <stdio.h>

int main(){
    int num1,num2;
    char operator;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter Operator: ");
    scanf(" %c",&operator);
    if(num2==0 && operator=='/'){
        printf("Cannot divide by zero");
    }
    else{
        switch(operator){
            case '+': printf("%d + %d = %d",num1,num2,(num1+num2));
                    break;
            case '-' : printf("%d - %d = %d",num1,num2,(num1-num2));
                    break;
            case '*' : printf("%d * %d = %d",num1,num2,(num1*num2));
                    break;
            case '/' : printf("%d / %d = %d",num1,num2,(num1/num2));
                    break;
            default: printf("Invalid operator");
                    break;
        }
    }
    return 0;
}