// Q--> WAP in C to find the roots of a quadratic equation using if-else construct.

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,D,r1,r2,real,imag;
    printf("Enter coefficients a, b and c : ");
    scanf("%f%f%f", &a,&b,&c);

    D = b*b - 4*a*c;

    if(D > 0){
        r1 = -(b + sqrt(D)) / 2*a;
        r2 = -(b - sqrt(D)) / 2*a;
        printf("roots are real and distinct, r1 = %f r2 = %f",r1,r2);
    }
    else if(D == 0){
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("roots are real and equal, r1 = r2 = %f", r1);
    }
    else{
        real = -b / (2 * a);
        imag = sqrt(-D) / (2 * a);
        printf("roots are imaginary r1 = %f + %fi and r2 = %f - %fi", real, imag, real, imag);
    }

    return 0;
}