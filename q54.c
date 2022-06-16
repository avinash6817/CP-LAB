// Q--> WAP in C to count number of positive,negative and zero elements in 1D array.

#include <stdio.h>

int main(){
    int arr[100],n,i,positive=0,negative=0,zero=0;

    printf("Enter the Array size [1-100] : ");    
    scanf("%d",&n);

    printf("Enter the %d elements : ",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0) positive++;
        if(arr[i]==0) zero++;
        if(arr[i]<0) negative++;
    }
    printf("Positive number count is %d\n",positive);
    printf("Negative number count is %d\n",negative);
    printf("Zero number count is %d\n",zero);

    return 0;
}