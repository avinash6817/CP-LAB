// Q--> WAP in C to read double elements in C and display elements along with their index and address using pointers and array.

#include <stdio.h>

int main(){
    int size,i;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    double arr[size],*ptr;
    ptr=arr;

    printf("Enter the array elements : -\n");
    for(i=0;i<size;i++){
        printf("arr[%d] : ",i);
        scanf("%lf",(ptr + i));
    }

    for(i=0;i<size;i++){
        printf("arr of %d index is %lf and address is %u\n",i,*(ptr + i),(ptr + i));
    }

    return 0;
}