
#include <stdio.h>

int rev_number(int *n){
    int rev=0,rem;
    while(*n>0){
        rem=*n%10;
        rev=rev*10+rem;
        *n=*n/10;
    }
    return rev;
}

int main(){
    int n,last,start,sum,rev;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    last=n%10;
    
    rev=rev_number(&n);
    printf("rev is %d",rev);
    start=rev%10;
    
    sum=start+last;
    printf("\nsum is %d",sum);

    return 0;
}
