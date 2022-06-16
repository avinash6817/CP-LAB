// Product of Matrix A and Matrix B
// A(m*n)  B(p*q)
// if n==p then multiplication possible 
// resultant multiplied matrix will be of size C(m*q)

#include <stdio.h>

#define N 50

int main(){
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;
    
    // Taking dimension of matrix a
    printf("Enter the dimension of matrix a :");
    scanf("%d%d",&m,&n);

    // Taking input of elements of matrix a
    printf("Enter the elements of matrix a \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // Printing matrix a
    printf("Matrix a is \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // Taking dimension of matrix b
    printf("Enter the dimension of matrix b:");
    scanf("%d%d",&p,&q);

    if(n!=p){
        printf("Not a valid multiplication of Matrix,\nTips: for multiplication col of 1st matrix should be equal to row of 2nd matrix\n");
    }
    else{
        // Taking input of elements of matrix b
        printf("Enter the elements of matrix b \n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("Enter b[%d][%d] : ",i,j);
                scanf("%d",&b[i][j]);
            }
        }

        // Printing matrix b
        printf("Matrix b is \n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                sum=0;
                for(k=0;k<m;k++){
                    sum = sum + (a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        
        printf("Multiplication of matrix a and matrix b is  matrix c\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

