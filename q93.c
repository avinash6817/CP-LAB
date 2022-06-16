// Q--> WAP in C to reverse a string in 1D array using pointers
#include <stdio.h>
#include <string.h>

int str_length_ptr(char *str);
void rev_string_ptr(char *str);

//********* Without pointer

// int main(){
//     char str[20] = "HELLO";
//     int i,len;
//     len=strlen(str);
    
//     for(i=0;i<len/2;i++){
//         char temp = str[i];
//         str[i] = str[len-i-1];
//         str[len -i -1] = temp;
//     }

//     printf("%s",str);

//     return 0;
// }

//********* With pointer

int main(){
    char s[50];
    
    printf("Enter the string : ");
    scanf("%s",s);

    rev_string_ptr(s);
    
    printf("reversed string is : %s",s);

    return 0;
}

// Reversing string function using pointer
void rev_string_ptr(char *str){
    int i,len;
    char *start,*end,temp;

    // len=str_length_ptr(str);
    len=strlen(str);
    start=str;
    end=str;

    for(i=0;i<len-1;i++)
        end++;
        
    for(i=0;i<len/2;i++){
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }   

}

// String Length function using pointer
int str_length_ptr(char *str){
    int len = 0;

    while(*(str + len) != '\0')
        len++;

    return len;
}
