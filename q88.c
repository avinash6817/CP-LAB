// Q--> WAP in C to create a parameterized function and check if a given number is Armstrong number.

#include <stdio.h>

int check_armstrong_num(int n){
    int rem,cube,sum=0,temp;
    temp=n;
    while(n>0){
        rem=n%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        n=n/10;
    }
    if(temp==sum)
        return printf("%d is armstrong number",temp);
    else
        return printf("%d is not armstrong number",temp);

}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    check_armstrong_num(n);

    return 0;
}