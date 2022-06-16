// Q--> WAP in C to find the sum of digits in a number.

#include <stdio.h>

int main(){
    int n,rem,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    while (n>0){ 
       rem = n % 10; 
       n = n/10;
       sum = sum + rem;
    //    printf("n = %d\n",n); 
    //    printf("rem = %d\n",rem); 
    }
    //    printf("n outside the loop %d\n",n); 
       printf("Sum of its digits is %d",sum); 

    return 0;
}