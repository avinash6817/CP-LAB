// Q--> WAP in C to create a file named “student_details” ,store name and registration number of ten students.Reopen the file and display the details in a tabular format.

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp= NULL;
    char name[30];
    int reg_no,i;

    fp = fopen("student_details.txt","w");

    if(fp==NULL){
        printf("No file found");
        exit(1);
    }

    for(i=0;i<10;i++){
        printf("Enter the Name and Reg-no %d students : ",i+1);
        scanf("%s%d",name,&reg_no);
        fprintf(fp,"%s - %d\n",name,reg_no);
    }

    fclose(fp);

    return 0;
}