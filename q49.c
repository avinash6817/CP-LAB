//Q-->  Write a program in C to sort all integer elements of 1D array using Bubble Sort technique.
// Bubble sort algoritham 
// To throw the largest number at the end

// #include <stdio.h>

// int main(){
//     int arr[5],i,j,temp;

//     printf("Enter the 5 numbers :");
//     for(i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
    
//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("The sorted Array is : ");
//     for(i=0;i<5;i++){
//         printf("%d,",arr[i]);
//     }

//     return 0;
// }


#include <stdio.h>

int main(){
    int i,j,temp;
    int arr[5] = {1,89,23,96,10};
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The sorted Array is : "); 
    for(i=0;i<5;i++){
        printf("%d,",arr[i]);
    }

    return 0;
}

// output : 1,10,23,89,96,