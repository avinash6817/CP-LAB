// Q--> WAP in C to create a parameterized function to convert decimal to binary. The binary equivalent must be displayed from main().

#include <stdio.h>

int DtoB(int n){
    int rem,i=1,binary=0;
    while(n!=0){
        rem = n % 2;
        binary = binary + (rem*i);
        n = n / 2;
        i = i * 10;
    }
    return binary;
}

int main(){
    int n,ans;
    printf("Enter the number : ");
    scanf("%d",&n);
    ans=DtoB(n);

    printf("%d",ans);

    return 0;
}