// Q--> WAP in C to create a parameterized recursive function to find sum on N natural numbers.

#include <stdio.h>

int sum_of_n(int n){
    if(n==0||n==1)
        return n;
    else 
        return (n + sum_of_n(n-1));
}

int main(){
    int n,ans;
    printf("Enter the term : ");
    scanf("%d",&n);
    ans=sum_of_n(n);

    printf("sum of first %d natural num is %d",n,ans);

    return 0;
}