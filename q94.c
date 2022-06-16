// Q94 --> WAP in C to Display elements of 2D Array using pointers

#include <stdio.h>

int main(){
    int r,c,i,j,*p;

    printf("Enter the size as rows and col of 2d array : ");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    
    // Appointing base address of 2d array to pointer p
    p=&arr[0][0];

    printf("Enter the elements of 2d Array -\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("arr[%d][%d] : ",i,j);
            // scanf("%d",&arr[i][j]);
            scanf("%d",(p + (i * c + j)));
        }
    }

    // p=&arr[0][0];

    printf("Displaying Array using ptr \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            // printf("%d\t",*(p + (i * c + j)));
            printf("arr[%d][%d] : %d\n",i,j,(p + (i * c + j)));
        }
        printf("\n");
    }
  
    return 0;
}