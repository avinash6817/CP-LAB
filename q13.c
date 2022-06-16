// Q--> WAP to compute Compound Interest. Write an algorithm & draw the flowchart for the same.HINT:Use  float or double data type.

#include <stdio.h>
#include <math.h>

int main(){
    float p,r,t,A,CI;
    printf("Enter the principle : ");
    scanf("%f",&p);
    printf("Enter the rate : ");
    scanf("%f",&r);
    printf("Enter the time : ");
    scanf("%f",&t);
    A = p * pow((1 + r/100),t);
    CI = A - p;
    printf("CI is : %f\n", CI);

    return 0;
}