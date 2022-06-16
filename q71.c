/* Q--> WAP in C to display elements of 2D array in following format:-
    a.Row major
    b.Column major
*/

#include <stdio.h>

#define N 50

int main(){
    int a[N][N],i,j,r,c;

    printf("Enter the dimension of Matrix : ");
    scanf("%d%d",&r,&c);

    printf("Enter the matrix elements -\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix is \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix by row-major \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        // printf("\n");
    }

    printf("\nMatrix by col-major \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",a[j][i]);
        }
        // printf("\n");
    }

    return 0;
}