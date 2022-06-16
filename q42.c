//Q--> Write a program in C to find factorial of a number using loop.

#include <stdio.h>

int main(){
    int n,fact=1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(n==0||n==1)
            printf("%d",n);
        else
            fact=fact*i;
    }

    printf("factorial is %d number is %d",n,fact);

    return 0;
}