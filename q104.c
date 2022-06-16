// Q--> WAP in C to open a file named my_c_file and store a string “SIKKIM MANIPAL INSTITUTE OF TECHNOLOGY”.

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp= NULL;
    char str[50] = "SIKKIM MANIPAL INSTITUTE OF TECHNOLOGY";
    fp = fopen("my_c_file.txt","w");
    if(fp==NULL){
        printf("No file found");
        exit(1);
    }

    fprintf(fp,"%s",str);
    fclose(fp);

    return 0;
}