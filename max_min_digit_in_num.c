#include <stdio.h>

int main(){
    int n=2846,max=0,min,rem;
    
    min=n%10;
    while(n!=0){
        rem=n%10;
        
        if(rem>max){
            max=rem;
        }
        if(rem<min){
            min=rem;
        }
        n=n/10;
    }
    
    printf("max is %d,min is %d",max,min);
    
    return 0;
}
