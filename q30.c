/* Q--> WAP in C to calculate the sum of series given below.
11+22+33.....+NN */

// #include <stdio.h>
 
// int main(){
//     int i,n,sum=0;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++){
//         printf("%d + ",11 * i);
//         sum = sum + 11 * i;
//     }
//     printf("\nsum of series = %d", sum);

//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main(){
    int sum=0,i,n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum = sum + pow(i,i);
    }
    printf("Sum of square of %d natural number is : %d",n,sum);

    return 0;
}
