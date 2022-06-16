// Q--> WAP to check whether a string is a palindrome or not

#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i,len,temp=0;
    printf("Enter the the string : ");
    scanf("%s",str);

    len=strlen(str);

    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            temp=1;
            break;
        }
    }
    if(temp==0)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
