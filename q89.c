// Q--> Find sum of elements in an array using user defined functions by passing array in a function.

#include <stdio.h>

// Note --> Well the Array we are passing is acting as pointer because during the calling of function sum_Of_Elem_Of_Arr(a,n) a is the base address of the Array

/* 
int sum_Of_Elem_Of_Arr(int arr[], int size){
     int sum=0,i;

   for(i=0;i<size;i++){
       sum = sum + arr[i];
   }

    return sum;
 }

 int main(){
     int n,i,sum=0,ans;
     printf("Enter the size of array : ");
     scanf("%d",&n);

    int a[n];

    printf("Now Enter the elements of array - \n");
    for(i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
     ans=sum_Of_Elem_Of_Arr(a,n);
     printf("Sum is : %d",ans);

    return 0;
} 
 */

// Using directly pointer

int sum_Of_Elem_Of_Arr(int *arr, int size){
    int sum=0,i;

    for(i=0;i<size;i++){
        sum = sum + *(arr + i);
    }

    return sum;
}

int main(){
    int n,i,sum=0,ans,*ptr;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    ptr = a;

    printf("Now Enter the elements of array - \n");
    for(i=0;i<n;i++){
        printf("arr[%d] : ",i);
        // scanf("%d",&a[i]);
        scanf("%d",(ptr + i));
    }
    
    ans=sum_Of_Elem_Of_Arr(ptr,n);
    printf("Sum is : %d",ans);

    return 0;
}
