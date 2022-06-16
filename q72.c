//Q--> WAP in C to display sum of all the right diagonal elements of a 2D-Array

#include <stdio.h>

int main(){
    int a[3][3],i,j,sum=0;

    printf("Enter the elements of matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // printing the matrix
    printf("Matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // Printing the left diagonal matrix
    printf("Left diagonal of Matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){
                printf("%d ",a[i][j]);
                sum = sum + a[i][j];
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("The sum of left diagonal of matrix is %d",sum);

    return 0;
}