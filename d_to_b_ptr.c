#include <stdio.h>

int d_t_b_ptr(int *n){
    int i=1,bin=0,rem;
    while(*n!=0){
        rem=*n%2;
        bin=bin + rem * i;
        *n=*n/2;
        i=i*10;
    }

    return bin;
}

int main(){
    int n;
    printf("Enter the number decimel num : ");
    scanf("%d",&n);

    printf("decimel number is : %d",d_t_b_ptr(&n));

    return 0;
}