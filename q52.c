// Q--> WAP in C to display all the elements present in even location in 1D array.

#include <stdio.h>

int main(){
    int arr[10],i,sum=0;
    printf("Enter the 10 array elements : ");

    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    

    printf("Values at even position are : ");
    for(i=0;i<10;i++)
        if(i%2==0)
            printf("arr[%d]=%d\n",i,arr[i]);

    return 0;
}
