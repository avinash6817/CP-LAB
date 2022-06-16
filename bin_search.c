// Q--> Write a program in C to search an element in 1D Array using Binary search technique.
// Array should be sorted before using the Binary search algoritam.

// int srt_arr[5]= {2,6,9,10,18};

#include <stdio.h>

int main(){
    int i,j,n,searching_num,temp,left,right,mid; 

    printf("Enter the Array size : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    // Sorting (Bubble sort)
    for(i=0;i<n-1;i++){   
        for(j=0;j<(n-i)-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Number is sorted : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    // Binary Search start from here After Sorting 

    printf("\nEnter the numbers to be searched : ");
    scanf("%d",&searching_num);

    left=0; 
    right=n-1;

    while(left<=right){
        mid=(left+right)/2;
        if(searching_num==arr[mid]){
            printf("%d number is found at index %d\n",searching_num,mid);
            break;
        }
        else if(searching_num<arr[mid])
            right=mid-1;
        else
            left=mid+1;
    }
    if(left>right)
        printf("%d number is not in the Array", searching_num);

    return 0;
}


// ***fixed Array Elements

// #include <stdio.h>

// int main(){

//     int searching_num,left,right,mid,flag=0,index; 
//     int arr[5]={2,6,9,10,18};

//     printf("\nEnter the numbers to be searched : ");
//     scanf("%d",&searching_num);

//     left=0; 
//     right=4;

//     while(left<=right){
//         mid=(left+right)/2;
//         if(searching_num==arr[mid]){
//             index=mid;
//             flag=1;
//             break;
//         }
//         else if(searching_num<arr[mid])
//             right=mid-1;
//         else
//             left=mid+1;
//     }
    
//     if(flag==1)
//         printf("found at %d index",index);
//     else
//         printf("Not found in the Array");

//     return 0;
// }