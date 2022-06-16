// Q5--> WAP in C to find the sum of all odd elements in 1D array.

#include <stdio.h>

int main(){
    int arr[10],i,sum=0;
    printf("Enter the 10 array elements : ");

    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    

    printf("sum of all odd elements are : ");
    for(i=0;i<10;i++)
        if(arr[i]%2==1)
            // printf("arr[%d]=%d\n",i,arr[i]);
            sum = sum + arr[i];
    printf("sum is %d",sum);

    return 0;
}
