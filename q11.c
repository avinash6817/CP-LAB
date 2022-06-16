// Q--> WAP in C to demonstrate the use of basic arithmetic operators +,-,*,/,%. Write an algorithm and draw the flowchart for the same.

#include <stdio.h>

int main(){
    int a,b,sum,diff,div,mul,rem;
    printf("Enter the first number : ");
    scanf("%d",&a);

    printf("Enter the second number : ");
    scanf("%d",&b);

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;

    printf("sum is : %d\n",sum);
    printf("diff is : %d\n",diff);
    printf("mul is : %d\n",mul);
    printf("div is : %d\n",div);
    printf("rem is : %d\n",rem);

    return 0;
} 