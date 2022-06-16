// Q--> WAP in C to calculate the sum of N natural numbers. 1+2+3+.......+N

#include <stdio.h>

int main(){
    int sum=0,i,n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("Sum of %d  natural number is : %d",n,sum);
    return 0;
}