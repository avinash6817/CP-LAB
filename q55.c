// Q--> WAP in C to display all the prime numbers present in 1D array.

#include <stdio.h>

int main(){
    int size,i,j,ctr;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements -\n");
    for(i=0;i<size;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("Original array is -\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\nPrime numbers in array is -\n");
    for(i=0;i<size;i++){
        ctr=0;
        for(j=2;j<arr[i];j++){
            if(arr[i]%j == 0){
                ctr++;
                break;
            }
        }
        if(ctr==0)
            printf("%d ",arr[i]);
    }

    return 0;
}
