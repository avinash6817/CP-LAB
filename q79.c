// Q--> WAP in C to add two numbers using a function.

#include <stdio.h>

float addTwo(float,float);

float addTwo(float a,float b){
    return a + b;
}

int main(){
    int a,b;
    float sum;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    
    sum=addTwo(a,b);
    printf("sum of %d and %d number is %f",a,b,sum);

    return 0;
}