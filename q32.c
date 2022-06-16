// Q--> WAP in C to find the reverse of a number and check whether the number is palindrome or not.

#include <stdio.h>

int main(){
    int n,rem,original_num,reverse=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    original_num = n;
    while (n>0){ 
       rem = n % 10; 
       reverse = reverse*10 + rem;
       n = n/10;
    } 
    printf("reverse of number is %d\n",reverse); 
    
    if(original_num==reverse){
        printf("Number is palindrome");
    }else{
        printf("Number is not palindrome");
    }

    return 0;
}