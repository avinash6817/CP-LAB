// 1111
//  222
//   33
//    4

#include <stdio.h>

int main(){
    int i,j,n;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++){
            if(j>=i&&j<=n){
                    // printf("*");
                    printf("%d",i);
                }
                else
                    printf(" ");
            }
        printf("\n");
    }
    return 0;
}

