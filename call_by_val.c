#include <stdio.h>

void swap(int,int);

int main(){
    int a=10,b=20;
    printf("Before swap : %d %d",a,b);
    swap(a,b);
    printf("\nAfter swap : %d %d",a,b);

    return 0;
}

void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swap : %d %d",x,y);
}