// Q--> WAP in C to find area of a circle using pointers.

#include <stdio.h>

float area(int *r){
    return (3.14 * *r * *r);
}

int main(){
    int r;
    float ans;
    printf("Enter the radius : ");
    scanf("%d",&r);

    ans=area(&r);
    printf("Area of circle is : %.2f",ans);

    return 0;
}