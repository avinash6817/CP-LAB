// Q--> WAP in C to demonstrate working of printf() and scanf() in C.

#include <stdio.h>
int main()
{
    int first_number;
    printf("Enter any integer number: ");
    scanf("%d", &first_number);   // using scanf to taking input from user
    printf("your number is = %d",first_number);
    return 0;
}