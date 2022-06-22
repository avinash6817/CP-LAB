#include <stdio.h>

void bin_search_ptr(int *arr,int size,int key){
    int left=0, right=size-1,mid,flag=0;
    while(left<=right){
        mid=(left+right)/2;
        if(key==*(arr+mid)){
            flag=1;
            break;
        }
        else if(key>*(arr+mid))
            left=mid+1;
        else
            right=mid-1;
    }
    
    if(flag)
        printf("%d num is found at index %d",key,mid);
    else
        printf("number is not found in the array");
}

int main(){
    int size,i,j;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of array -\n");
    for(i=0;i<size;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Array is -\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    // Sort the Array using bubble sort
    for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\nSorted Array is -\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    int left,right,mid,key;

    printf("\nEnter the number to search : ");
    scanf("%d",&key);

    bin_search_ptr(arr,size,key);
    return 0;
}

