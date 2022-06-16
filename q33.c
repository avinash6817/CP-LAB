// Q--> WAP in C to convert decimal number to its binary equivalent.

#include <stdio.h>

int main(){
    int n,rem,binary = 0,i=1;
    printf("Enter the Decimel number : ");
    scanf("%d",&n);

    while(n!=0){
        rem = n % 2;
        binary = binary + (rem*i);
        n = n / 2;
        i = i * 10;
    }
    printf("Binary number is : %d",binary);

    return 0;
}


// #include <stdio.h>

// int DToB(int n){
//     int b[100],i=0,j;
//     while(n>0){
//         b[i] = n%2;
//         n=n/2;
//         i++;
//     }
//     for(j=i-1;j>=0;j--){
//         printf("%d",b[j]);
//     }
// }

// int main(){
//     int n;
//     printf("Enter the numbers : ");
//     scanf("%d",&n);
//     DToB(n);

//     return 0;
// }