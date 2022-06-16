// Q--> WAP in C to create a function named c_power( ) with parameters base and exponent to calculate base raised to the power of exponenet. Do not use pow() function.

#include <stdio.h>

int c_power(int base,int pow){
    int power=1,i;
    for(i=1;i<=pow;i++){
        power=power*base;
    }

    return power;
}

int main(){
    int base,pow,result;

    printf("Enter the base and pow : ");
    scanf("%d%d",&base,&pow);

    result=c_power(base,pow);
    printf("Power is %d",result);
    
    return 0;
}
