#include <stdio.h>
#include <string.h>

void rev_str_ptr(char *str,int len){
    int i;
    for(i=0;i<len/2;i++){
        char temp = *(str + i);
        *(str + i) = *(str + (len - i -1));
        *(str + (len - i -1))=temp;
    }
    printf("Rev of string is %s",str);
}

//********* Using function with pointer
int main(){
    char str[50],*str_ptr;
    int len;
    printf("Enter the string : ");
    scanf("%s",str);

    len=strlen(str);
    str_ptr=str; // This will also work bcs at the end str is an array and array is an internal pointer.

    rev_str_ptr(str_ptr,len);

    return 0;
}


//********* Using pointer
/*
int main(){
    char str[50],*str_ptr;
    int len;
    printf("Enter the string : ");
    scanf("%s",str);

    len=strlen(str);

    str_ptr=str;

    printf("Rev of string is : ");
    for(int i=0;i<len/2;i++){
        char temp = *(str_ptr + i);
        *(str_ptr + i) = *(str_ptr + (len - i -1));
        *(str_ptr + (len - i -1))=temp;
    }
    printf("%s",str);

    return 0;
}
*/

//******** Without pointer
/*
int main(){
    char str[50];
    int len;
    printf("Enter the string : ");
    scanf("%s",str);

    len=strlen(str);

    printf("Rev of string is : ");
    for(int i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }

    printf("%s",str);

    return 0;
}
*/