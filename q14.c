// Q--> Write a program to swap two variables using a third variable. Write an algorithm & draw the flowchart for the same. 

#include<stdio.h>
int main() {
  int a, b, t;
  printf("Enter number a: ");
  scanf("%d", &a);
  printf("Enter number b: ");
  scanf("%d", &b);

  t = a;
  a = b;
  b = t;

  printf("After swapping, number a is = %d\n", a);
  printf("After swapping, number b is = %d", b);
  return 0;
}
 