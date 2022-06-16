//Q--> WAP in C to display all the elements in the triangle below the left diagonal

#include <stdio.h>

int main(){
    int a[3][3],i,j;

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

    // Printing the left diagonal 
    printf("Left diagonal below elements is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i-j>=0)
                printf("%d\t",a[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }

    return 0;
}