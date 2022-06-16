/* Q--> WAP in C to create a structure named LAPTOP_DETAILS to store following configuration details of a laptop.
    Brand
    Model
    RAMsize
    Harddisksize
    Color
    Screensize
Create a function accept() to store details for fifty laptops in the structure.Create another function display() to display the laptop configuration details for all the laptops in a tabular format */

#include <stdio.h>

#define SIZE 2

struct LAPTOP_DETAILS{
    char brand[30];
    int model;
    int ramSize;
    int hardDiskSize;
    char color[20];
    int screenSize;
};

struct LAPTOP_DETAILS laptop[SIZE];

void accept(void){
    for(int i=0;i<SIZE;i++){
        printf("Brand[%d] : ",i);
        scanf("%s",laptop[i].brand);
        printf("Model[%d] : ",i);
        scanf("%d",&laptop[i].model);
        printf("Ramsize[%d] : ",i);
        scanf("%d",&laptop[i].ramSize);
        printf("HardDiskSize[%d] : ",i);
        scanf("%d",&laptop[i].hardDiskSize);
        printf("Color[%d] : ",i);
        scanf("%s",laptop[i].color);
        printf("ScreenSize[%d] : ",i);
        scanf("%d",&laptop[i].screenSize);
    }
}

void display(void){
    for(int i=0;i<SIZE;i++){
        printf("Laptop Brand[%d] : %s\n",i,laptop[i].brand);
        printf("Laptop Model[%d] : %d\n",i,laptop[i].model);
        printf("Laptop Ramsize[%d] : %d\n",i,laptop[i].ramSize);
        printf("Laptop HardDiskSize[%d] : %d\n",i,laptop[i].hardDiskSize);
        printf("Laptop Color[%d] : %s\n",i,laptop[i].color);
        printf("Laptop ScreenSize[%d] : %d\n",i,laptop[i].screenSize);
    }
}

int main(){
    accept();
    display();

    return 0;
}