// Q--> WAP in C to count number of vowels and consonants in a string using pointers.

#include <stdio.h>
#include <string.h>

int main(){
    int len,i,count=0;
    char str[50],*ptr;

    printf("Enter the string : ");
    scanf("%s",str);
    // fgets(str,50,stdin);

    ptr=str;

    len = strlen(str);
    printf("String length is %d\n",len);

    /*
    for(i=0;i<len;i++){
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
           count++;
        }
    }
    */

    for(i=0;i<len;i++){
        if(*(ptr + i)=='a'||*(ptr + i)=='e'||*(ptr + i)=='i'||*(ptr + i)=='o'||*(ptr + i)=='u'){
            count++;
        }
    }

    printf("Vowels is %d\n",count);
    printf("Consonant is %d",len-count);

    return 0;
}
