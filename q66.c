// Q--> WAP in C to find difference of elements of two 2D-Array.The difference must be stored in a new 2D Array

#include <stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3],i,j;

    // Taking input of elements of matrix a 
    printf("Enter the elements of matrix a \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // Taking input of elements of matrix b 
    printf("Enter the elements of matrix b \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    // Printing matrix a
    printf("matrix a is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // Printing matrix b
    printf("matrix b is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    // printing the diff of matrix a and b and storing it in c
    printf("The diff of elements of matrix a and matrix b is matrix c : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j] - b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
