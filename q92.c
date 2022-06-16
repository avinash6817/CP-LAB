// Q--> WAP in C to search element in 1D array using linear searching techniques.Implement all the operations on the array using pointer.

#include <stdio.h>

int main(){
    int size,i,search,*p,flag=0;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];
    p = arr;

    printf("Enter the Array elements - \n");
    for(i=0;i<size;i++){
        printf("arr[%d] : ",i);
        scanf("%d",(arr + i));
    }

    printf("Array is : ");
    for(i=0;i<size;i++){
        // printf("Array is %d : ",arr[i]);
        printf("%d ",*(arr + i));
    }

    printf("\nEnter the elements you want to search : ");
    scanf("%d",&search);

    for(i=0;i<size;i++){
        if(*(arr + i)==search){
            flag=1;
            break;
        }
    }

    if(flag)
        printf("%d Number is found at index : %d",search,i);
    else
        printf("Number is not found in an Array");


    return 0;
}