// Q--> WAP in C to swap two numbers using call by reference.

#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("\nAfter swapping a is %d,b is %d",*a,*b);

}

int main(){
    int n1,n2;
    printf("Enter the two numbers : ");
    scanf("%d%d",&n1,&n2);

    printf("Before swapping a is %d,b is %d",n1,n2);
    swap(&n1,&n2);

    return 0;
}