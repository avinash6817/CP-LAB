//Q--> Write a program in C to transpose a 2D-Array and display it

#include <stdio.h>

int main(){
    int i,j,r,c;

    // Taking the dimension of matrix 
    printf("Enter the row & col : ");
    scanf("%d%d",&r,&c);

    int a[r][c] ;
    
    // Taking the Matrix elements input 
    printf("Enter the elements of matrix \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // printing the Original matrix
    printf("Original matrix is \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // Printing the Transpose matrix
    printf("Transpose matrix is \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
