//Q--> Write a program in C to find maximum & minimum element in a 2D-Array

#include <stdio.h>

int main(){
    int a[3][3],i,j,min,max;

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

    min = max = a[0][0];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }

    printf("max is %d, min is %d",max,min);

    return 0;
}
