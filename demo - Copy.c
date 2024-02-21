#include<stdio.h>
int main(){
    char operator;
    double num1, num2, result;

    // Entering the operator
    printf("Enter an operator (+ ,- ,* ,/):");
    scanf("%c",&operator);

    // Entering the 1st number
    printf("Enter No.1:");
    scanf("%lf",&num1);

    // Entering the 2nd number
    printf("Enter No.2:");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 !=0)
        {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero");
            return 1; //to exit the code
        }
        break;
    default: 
        printf("Not valid operator");
        break;
    }

    printf("Result: %.2lf",result);

    return 0;
}