// Q--> WAP in C to display all the odd elements in 1D integer array.

#include <stdio.h>

int main(){
    int a[5],i;
    printf("Enter the 5 integres number from the user : ");

    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("odd numbers in Array are : ");
    for(i=0;i<5;i++)
        if(a[i]%2!=0)
            printf("%d ",a[i]);

    return 0;
}
