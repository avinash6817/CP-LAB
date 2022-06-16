// Q--> WAP in C to simulate a digital calculator using parameterized function for every operation &along with return values.

#include<stdio.h>

int add(int,int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int rem(int, int);

int main(){
    int n1,n2,n,result;

    printf("Enter your choices \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n5.Remainder\n");
    scanf("%d", &n);

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    switch (n) {
      case 1:
        result=add(n1,n2);
        printf("%d",result);
        break;
      case 2:
        result=subtract(n1,n2);
        printf("%d",result);
        break;
      case 3:
        result=multiply(n1,n2);
        printf("%d",result);
        break;
      case 4:
        result=divide(n1,n2);
        printf("%d",result);
        break;
      case 5:
        result=rem(n1,n2);
        printf("%d",result);
        break;
      default:
        printf("please Enter the correct input!");
      }

    return 0;
}


int add(int n1, int n2){
    return n1+n2;
}

int subtract(int n1, int n2){
    return n1-n2;
}

int multiply(int n1, int n2){
    return n1*n2;
}

int divide(int n1, int n2){
    return n1/n2;
}

int rem(int n1, int n2){
    return n1%n2;
}

