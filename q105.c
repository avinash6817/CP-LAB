// Q--> Reopen the file my_C_file,read & display its content.

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp= NULL;
    // char str[50] = "SIKKIM MANIPAL INSTITUTE OF TECHNOLOGY";
    char ch, str[50];
    fp = fopen("my_c_file.txt","r");

    if(fp==NULL){
        printf("No file found");
        exit(1);
    }

    // while(!feof(fp)){
    //     ch = fgetc(fp);
    //     printf("%c",ch);
    // }

    while(!feof(fp)){
        fgets(str,50,fp);
        printf("%s",str);
    }

    fclose(fp);

    return 0;
}