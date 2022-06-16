// Q--> WAP in C to calculate sum & average of two numbers using pointers.

#include <stdio.h>

int sum(int *a,int *b){
    printf("Sum is : %d",*a + *b);
}

int avg(int *a,int *b){
    printf("\nAvg is : %.2f",(float)(*a + *b)/2);
}
 
int main(){
    int a,b,*p1,*p2;

    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);

    /* 
    p1=&a;
    p2=&b;

    sum = *p1 + *p2;
    float avg=(float)sum/2;

    printf("Sum is : %d, Avg is : %.2f",sum,avg); 
    */

    sum(&a,&b);
    avg(&a,&b);

    return 0;
}