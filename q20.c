// Q--> WAP in C to check whether an alphabet is vowel or consonant using ternary operator. Write an algorithm & draw the flowchart for the same.

#include <stdio.h>

int main(){
    char inp;
    printf("Type any Alphabet : ");
    scanf("%c",&inp);    
    (inp=='a' || inp=='e' ||inp=='i' ||inp=='o' ||inp=='u') ? printf("Alphabet is vowels"):printf("Alphabet is consonant");

    return 0;
}