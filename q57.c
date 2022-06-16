// Q--> Write a menu driven program in c to perform following basic operations on a string without using built-in function available under <string.h>


#include <stdio.h>

int main(){
    char s1[20],s2[20];
    int n,i=0,j=0;

    printf("Enter your choices : \n1.String length \n2.String concatenate \n3.String compare \n4.String copy \n");
    scanf("%d",&n);

    switch(n){
        // String length
        case 1:
            printf("Enter the string : ");
            scanf("%s",s1);
            for(i=0;s1[i]!='\0';i++);
            printf("The length of the string is %d",i);
            break;
        // String concatenation
        case 2:
            printf("Enter the first string : ");
            scanf("%s",s1);
            printf("Enter the second string : ");
            scanf("%s",s2);

            // To iterate First String from Start to end  
  	        for (i = 0; s1[i]!='\0'; i++);

            // Concatenating s2 into s1  	
  	        for (j = 0; s2[j]!='\0'; j++, i++){
  		        s1[i] = s2[j];
  	        }
  	        s1[i] = '\0';
  	        printf("After the Concatenation = %s", s1);
            break;
        // String comparison
        case 3:
            printf("Enter the string1 : ");
            scanf("%s",s1);
            printf("Enter the string2 : ");
            scanf("%s",s2);
            
            for(i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++);
		   
  	        if(s1[i] < s2[i])
   	        	printf("string1 is Less than string2");
	        else if(s1[i] > s2[i])
   	        	printf("string2 is Less than string1");
	        else
   	        	printf("string1 is Equal to string2");
            break;
        // String copy
        case 4:
            printf("Enter the string : ");
            scanf("%s",s1);
  	        for (i = 0; s1[i]!='\0'; i++)
  	        	s2[i] = s1[i];
  	        s2[i] = '\0';
  	        printf("Your copied string is %s", s2);
  	        // printf("\n Total Number of Characters that we copied = %d\n", i);
            break;

        default:    
            printf("Wrong input");
    }

    return 0;
}

