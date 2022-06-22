#include <stdio.h>

/*
int main(){
    int n,t1,t2,t3;
    t1=0;
    t2=1;
    t3=t1+t2;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);

    printf("fib series is %d %d ",0,1);

    for(int i=2;i<n;i++){
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }


    return 0;
}
*/


void fib_ptr(int *n){
    int n1=0,n2=1,next;
    for(int i=0;i<*n;i++){
        printf("%d ",n1);
        next=n1+n2;
        n1=n2;
        n2=next;
    }
}

int main(){
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    fib_ptr(&n);

    return 0;
}


/*
void fib_ptr(int *n){
    int n1=0,n2=1,next,*p1,*p2,*pnext;
    p1=&n1;
    p2=&n2;
    pnext=&next;
    for(int i=0;i<*n;i++){
        printf("%d ",*p1);
        *pnext=*p1+*p2;
        *p1=*p2;
        *p2=*pnext;
    }
}

int main(){
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    fib_ptr(&n);

    return 0;
}
*/