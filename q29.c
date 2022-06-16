/* Q--> WAP in C to calculate the sum of series given below.
1^2+2^2+3^2.......+N^2 */

#include <stdio.h>

int main(){
    int sum=0,i,n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum = sum + i*i;
    }
    printf("Sum of square of %d natural number is : %d",n,sum);

    return 0;
}