//Q--> Demonstrate the use of puts(),putchar(),gets(),getchar()

#include <stdio.h>

int main(){
    int i;
    char ch[20],name[10];
    printf("Enter any string : ");
    gets(ch);  // reads string from user 
    // scanf("%s",ch); // we can use scanf instead of gets()
    printf("Your entered string is : ");
    puts(ch); // Display the string

    printf("Now Enter the char : ");
    for(i=0;i<10;i++)
        name[i]=getchar();
    
    printf("Your Entered char is : ");
    for(i=0;i<10;i++)
        putchar(name[i]);


    return 0;
}