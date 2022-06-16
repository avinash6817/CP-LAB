//Q--> Write a program in C to count number of digits in a number using loop

#include <stdio.h>

int main(){
    int n,ctr=0;
    printf("Enter the numbers : ");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        ctr++;
    }

    printf("No of digit in number is : %d",ctr);

    return 0;
}