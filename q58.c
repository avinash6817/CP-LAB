
// Q--> Menu driven program to demonstrate the use of inbuilt basic string handling functions

#include <stdio.h>
#include <string.h>

int main(){
    char s1[20],s2[20];
    int n,i,st,len;

    printf("Enter your choices : \n1.String copy \n2.String concatenate \n3.String compare \n4.String length \n");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("Enter the string to be copied : ");
            scanf("%s",s2);
            strcpy(s1,s2);
            printf("The copied string is %s",s2);
            break;
        case 2:
            printf("Enter the first string : ");
            // gets(s1);
            scanf("%s",s1);
            printf("Enter the second string : ");
            // gets(s2);
            scanf("%s",s2);
            strcat(s1,s2);
            printf("The concatenated string is %s",s1);
            break;
        case 3:
            printf("Enter the first string : ");
            // gets(s1);
            scanf("%s",s1);
            printf("Enter the second string : ");
            // gets(s2);
            scanf("%s",s2);

            st=strcmp(s1,s2);
            if(st==0)
                printf("The string are same");
            else if(st>0)
                printf("The first string is greater than second string");
            else
                printf("The second string is greater than first string");
            break;
        case 4:
            printf("Enter the string : ");
            // gets(s1);
            scanf("%s",s1);
            len=strlen(s1);
            printf("The length of string is %d",len);
            break;
        default:    
            printf("Wrong input");
    }

    return 0;
}

