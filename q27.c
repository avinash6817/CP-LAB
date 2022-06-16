// Q--> WAP in C to design a basic calculator with addition, subtraction, multiplication,power and division facility.Implement usingelse-if ladder

#include <stdio.h>
#include <math.h>

int main(){
    char op;
    float a,b;
    printf("Enter an operator for performing (+, -, *, ^, /) : ");
    scanf("%c",&op);
    printf("Enter the two numbers giving space : ");
    scanf("%f%f",&a,&b);

    if(op == '+'){
        printf("sum of %f and %f is : %f",a,b,a + b);
    }
    else if(op == '-'){
        printf("difference of %f and %f is : %f",a,b,a - b);
    }
    else if(op == '*'){
        printf("multiplication of %f and %f is : %f",a,b,a * b);
    }
    else if(op == '^'){
        printf("power of %f and %f is : %f",a,b,pow(a,b));
    }
    else if(op == '/'){
        printf("division of %f and %f is : %f",a,b,a / b);
    }
    else{
        printf("Enter the correct operator!");
    }

    return 0;
}