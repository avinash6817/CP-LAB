// Given Array - arr[4] = {4,3,2,1};
// Expected output - Throw the largest number in the End

#include <stdio.h>

int main(){
    int i,j,temp;
    int arr[4] = {4,3,2,1};
    
        for(j=0;j<4;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    
    printf("The sorted Array is : ");
    for(i=0;i<4;i++){
        printf("%d,",arr[i]);
    }

    return 0;
}
