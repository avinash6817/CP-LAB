// Q--> WAP in C to display the Fibonacci series upto nth terms using parameterized function.

#include <stdio.h>

int fib(int);

int fib(int n){
    int t1=0,t2=1,t3=0;
    for(int i=0;i<n;i++){
        printf("%d ",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
}

int main(){
    int n;
    printf("enter the no. of terms : ");
    scanf("%d",&n);
    printf("Fibonacci series of %d term is : \n",n);
    fib(n);

    return 0;
}
