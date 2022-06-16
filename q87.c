// Q--> WAP in c to reverse a number using function recursion

#include <stdio.h>

int rev_number(int n){
    int rem,reverse=0;

    while(n>0){
        rem=n%10;
        reverse=reverse*10 +rem;
        n=n/10;
    }

    return reverse;
}

int main(){
    int n,ans;
    printf("Enter the number : ");
    scanf("%d",&n);
    ans=rev_number(n);
    printf("Reverse number is : %d",ans);

    return 0;
}