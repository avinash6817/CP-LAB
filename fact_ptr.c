#include <stdio.h>


//******** Using Recursions and pointer


//******** Using pointer
int fact_ptr(int *n){
    int fact=1;
        
    for(int i=1;i<=*n;i++){
        if(*n==0||*n==1)
            fact=*n;
        else
            fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("factorial of %d num is %d",n,fact_ptr(&n));

    return 0;
}

//******** Without pointer
/*
int fact_ptr(int n){
    int fact=1;
        
    for(int i=1;i<=n;i++){
        if(n==0||n==1)
            return n;
        else
            fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("factorial of %d num is %d",n,fact_ptr(n));

    return 0;
}
*/