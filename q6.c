// Q--> Write an algorithm to find the largest among two different numbers entered by user.

#include <stdio.h> 
int main()
{
    int num1, num2;
    printf("Please Enter Two different values\n");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2){
        printf("%d is Largest\n", num1);
    }
    else if (num2 > num1){
        printf("%d is Largest\n", num2);
    }
    else{
        printf("Both are Equal\n");
    }
    return 0;
}

/*
step-1: start.
step-2: Take number(n) from the user.
step-3: if n % 2 = 0, then display the number is even, 
        else number is odd.
step-4: stop
*/