#include <stdio.h>

int fact(int);

int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return (fact(n-1) * n);
}

int main(){
    int a,factorial;
    printf("Enter the no. of terms : ");
    scanf("%d",&a);
    factorial=fact(a);
    printf("factorial of %d number is %d",a,factorial);

    return 0;
}
