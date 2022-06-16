#include <stdio.h>

int main(){
    int size,i,sum=0,*ptr;
    printf("Enter the size of Array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Now Enter Array elements\n");
    for(i=0;i<size;i++){
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    // ptr=arr;
 
    // for(i=0;i<size;i++){
    //     sum = sum + *ptr;
    //     ptr++;
    // }
    
    for(ptr=&arr[0];ptr<&arr[size];ptr++){
        sum = sum + *ptr;
    }

    printf("Sum of Array Elements is : %d",sum);

    return 0;
}