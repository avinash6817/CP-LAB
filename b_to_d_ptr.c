#include <stdio.h>
#include <math.h>

int b_to_d_ptr(long int *n){
    int dec=0,rem,base=1;
    while(*n!=0){
        rem=*n%10;
        dec=dec + rem * base;
        *n=*n/10;
        base=base*2;
    }
    return dec;
}

int main(){
    long int n;
    printf("Enter the number binary num : ");
    scanf("%ld",&n);

    printf("decimel number is : %d",b_to_d_ptr(&n));

    return 0;
}


//******** without using pow function
/*
int main(){
    int n,i=1,dec=0,rem,base=1;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        dec=dec + rem * base;
        n=n/10;
        base=base*2;
    }

    printf("decimel number is : %d",dec);

    return 0;
}
*/


//******** using pow function
/*
int main(){
    int n,i=1,dec=0,rem;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        dec=dec + rem * pow(2,i);
        n=n/10;
        i++;
    }

    printf("decimel number is : %d",dec);

    return 0;
}
*/