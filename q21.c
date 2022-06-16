// Q--> WAP in C to find the greatest among three numbers using if-else construct.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter any three numbers leaving space : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("%d is the largest number",a);
    
    else if(b>a && b>c)
        printf("%d is the largest number",b);
    
    else if(c>a && c>b)
        printf("%d is the largest number",c);
    

    return 0;
}