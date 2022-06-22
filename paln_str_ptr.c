#include <stdio.h>
#include <string.h>

void paln_str_ptr(char *str,int len){
    int i;
    for(i=0;i<len/2;i++){
        if(*(str+i)!=*(str+len-i-1)){
            printf("Not a plaindrome");
            break;
        }
    }
    if(i==len/2)
        printf("Palindrome");
}

int main(){
    char str[50];
    int l,i;
    printf("Enter the string : ");
    gets(str);
    
    l=strlen(str);
    paln_str_ptr(str,l);

    return 0;
}