//Q--> Write a program in C to find the sum and average of elements in 1D float Array

#include <stdio.h>

int main(){
    int a[5], n, i;
    float avg = 0, sum = 0;
    printf("Enter the Numbers of element in Array: ");
    scanf("%d", &n);

    printf("Enter the elements of Array : ");
    for (i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i< n; i++){
        sum = sum + a[i];
    }
    avg = sum / n;

    printf("Sum of Element of Array is : %f\n", sum);
    printf("Average of Element of Array are : %f ", avg);

    return (0);
}

