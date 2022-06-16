// Q--> WAP in C to check whether an alphabet is vowel or consonant using if-else construct.

#include <stdio.h>

int main(){
    char inp;
    printf("Type any Alphabet : ");
    scanf("%c",&inp);
    if(inp=='a' || inp=='e' ||inp=='i' ||inp=='o' ||inp=='u'){
        printf("Alphabet is vowels");
    }
    else{
        printf("Alphabet is consonant");
    }

    return 0;
}