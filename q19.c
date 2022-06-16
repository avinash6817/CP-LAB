// Q--> WAP in C to find the greatest among three numbers using ternary operator.Write an algorithm &draw the flowchart for the same.

#include <stdio.h>

int main(){
    int a,b,c,largest;
    printf("Enter the three integer type numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    largest = (a>b) ? (a>c?a:c) : (b>c?b:c);
    printf("Largest number is : %d",largest);
    return 0;
}