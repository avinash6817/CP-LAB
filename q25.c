// // Q--> WAP in C to design a basic calculator with addition, subtraction,multiplication,power and division facility.Implement using switch case construct.

#include <stdio.h>
#include <math.h>

int main(){
    char op;
    float a,b;
    printf("Enter an operator for performing (+, -, *, ^, /) : ");
    scanf("%c",&op);
    printf("Enter the two numbers giving space : ");
    scanf("%f%f",&a,&b);

    switch(op){
        case '+':
            printf("sum of %f and %f is : %f",a,b,a + b);
            break;
        case '-':
            printf("difference of %f and %f is : %f",a,b,a - b);
            break;
        case '*':
            printf("multiplication of %f and %f is : %f",a,b,a * b);
            break;
        case '^':
            printf("power of %f and %f is : %f",a,b,pow(a,b));
            break;
        case '/':
            printf("division of %f and %f is : %f",a,b,a / b);
            break;
        default:
            printf("Enter the correct operator!");
    }
     
    return 0;
} 