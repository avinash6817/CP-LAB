//Q-->  Write a program in C to demonstrate Linear search in 1D Array
// Linear search in an Array 
// Linear search work on Both sorted or unsorted Array

#include <stdio.h>

int main(){
    int i,num,found=0; 
    int arr[5]= {5,8,9,1,10};

    printf("Enter the number you want to search : ");
    scanf("%d",&num);

    for(i=0;i<5;i++){
        printf("hey");
        if(arr[i]==num){
            found=1;
            break;
        }
    }
    // printf("The current value of i is %d\n",i);

    if(found)
        printf("%d Number is found at index : %d",num,i);
    else
        printf("Number is not found in an Array");
   
    return 0;
}

