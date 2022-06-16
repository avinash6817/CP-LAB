//Q--> WAP in C to count all the even elements present in a 2D-Array

#include <stdio.h>

int main(){
    int a[3][3],i,j,count=0;

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
    printf("odd elements are \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]%2==0){
                printf("%d\t",a[i][j]);
                count++;
            }
            else
                printf("\t");
        }
        printf("\n");
    }

    printf("The no. of Even elemnents in 2d Array is %d",count);

    return 0;
}