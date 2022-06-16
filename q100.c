// Q--> WAP in C to swap all the elements of two 1d array and display them using functions and pointers.

#include <stdio.h>

void swap_arr_elm_ptr(int *arr1,int *arr2,int *size){
    for(int i=0;i< *(size);i++){
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main(){
    int size,i;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr1[size],arr2[size],*ptr1,*ptr2;

    ptr1=arr1;
    ptr2=arr2;

    printf("Enter the elements of arr1 -\n");
    for(i=0;i<size;i++){
        printf("arr[%d] : ",i);
        scanf("%d",(ptr1 + i));
    }

    printf("Enter the elements of arr2 -\n");
    for(i=0;i<size;i++){
        printf("arr2[%d] : ",i);
        scanf("%d",(ptr2 + i));
    }

    printf("Before swapping array1 are : ");
    for(i=0;i<size;i++)
        printf("%d ",*(ptr1 + i));

    printf("\nBefore swapping array2 are : ");
    for(i=0;i<size;i++)
        printf("%d ",*(ptr2 + i));

    // swap the elements of array
    /*
    for(i=0;i<size;i++){
        int temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    */
    swap_arr_elm_ptr(ptr1,ptr2,&size);

    printf("\nAfter swapping array1 are : ");
    for(i=0;i<size;i++)
        printf("%d ",*(ptr1 + i));

    printf("\nAfter swapping array2 are : ");
    for(i=0;i<size;i++)
        printf("%d ",*(ptr2 + i));

    
    return 0;
}