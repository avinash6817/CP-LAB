// Q--> WAP in C to create a parameterized function name c_prime() to find all the prime numbers between a given range.
// Number b/w 10 20 --> 11 13 17 19

#include <stdio.h>

int c_prime(int start, int end){
    int i,j,prime,ctr=0;
    for(i=start+1;i<end;i++){
        prime=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
                prime++;
        }
        if(prime==2){
            ctr++;
            printf("%d ",i);
        }
    } 
    return ctr;
}

int main(){
    int i,j,start,end;

    printf("Enter the start and last term : ");
    scanf("%d%d",&start,&end);
    int g=c_prime(start,end);
    printf("\nCount : %d",g);
    return 0;
}
