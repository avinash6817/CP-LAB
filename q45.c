//Q-->  Write a program in C to find the smallest and largest number in 1D double Array

#include <stdio.h>

int main(){
    int arr[100], n, i, small, large;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the numbers : ");
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    small = arr[0];
    large = arr[0];

    for (i=0; i<n;i++){
        if (arr[i] < small){
            small = arr[i];
        }
        if (arr[i] > large){
            large = arr[i];
        }
    }

    printf("Largest element is : %d\n", large);
    printf("Smallest element is : %d", small);

    return 0;
}
