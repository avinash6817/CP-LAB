#include <stdio.h>

void bbl_sort_ptr(int *p,int size){
    for(int i=0;i<size-1;i++){   
        for(int j=0;j<(size-i)-1;j++){
            if(*(p+j) > *(p +(j+1))){
                int temp = *(p+j);
                *(p+j) = *(p +(j+1));
                *(p +(j+1)) = temp;
            }
        }
    }
    printf("\nArray after sorting : ");
    for(int i=0;i<size;i++){
        printf("%d ",*(p+i));
    }

}

int main(){
    int i,j,size,temp;

    // size of array
    printf("Enter the size of Array : ");
    scanf("%d",&size);

    int arr[size];
    int *p = &arr[0];

    // array elements 
    printf("Enter the Array Elements -\n");
    for(i=0;i<size;i++){
        printf("Enter arr[%d] : ",i);
        scanf("%d",(p+i));
    }

    // printing array before sorting
    printf("Array before sorting : ");
    for(i=0;i<size;i++){
        printf("%d ",*(p+i));
    }

    // Sorting logic
    bbl_sort_ptr(p,size);

    return 0;
}

