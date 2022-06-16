// WAP in C to reverse elements of an array and store it in same array.

#include <stdio.h>

int main(){
    int size,i;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements -\n");
    for(i=0;i<size;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal array is -\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    for(i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    printf("\nReversed array elements are -\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }    


    return 0;
}