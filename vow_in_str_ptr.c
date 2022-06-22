#include <stdio.h>
#include <string.h>

void vow_in_str_ptr(char *str,int len){
    for(int i=0;i<len;i++){
        if(*(str + i)=='a'||*(str + i)=='e'||*(str + i)=='i'||*(str + i)=='o'||*(str + i)=='u'){
            printf("%c ",*(str + i));
        }
    }
}

int main(){
    int len,i,count=0;
    char str[50],*ptr;
    printf("Enter the string : ");
    scanf("%s",str);
    // fgets(str,50,stdin);

    ptr=str;
    len = strlen(str);

    /*
    for(i=0;i<len;i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
           count++;
        }
    }
    */

    vow_in_str_ptr(ptr,len);
    // printf("\nVowels is %d\n",count);
    // printf("Consonant is %d",len-count);

    return 0;
}
