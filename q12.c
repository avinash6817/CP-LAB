// Q--> WAP to compute Simple Interest. Write an algorithm & draw the flowchart fo rthe same.

#include <stdio.h>

int main(){
    float p,r,t,SI;
    printf("Enter the principle,rate,time leaving space to calculate the SI : ");
    scanf("%f%f%f",&p, &r, &t);
    SI = (p*r*t)/100;
    printf("SI is : %f\n", SI);
    return 0;
}