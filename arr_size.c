#include <stdio.h>
#define max 50

int main(){
    int i,size;
    int arr[]={1,3,1,5,8,7,6};
    size = sizeof(arr)/sizeof(arr[0]);
    printf("Array size is : %d\n",size);

    for(i=0;i<size;i++)
        printf("arr[%d] is : %d\n",i,arr[i]);

    return 0;
}