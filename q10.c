// Q--> WAP to demonstrate the use of sizeof(),const,#define.

// #include <stdio.h>
// #define PI 3.14 

// int main(){
//     float radius,area;
//     printf("Enter the radius of circle which you want to calculate : ");
//     scanf("%f",&radius);
//     area = PI*radius*radius;
//     printf("The Area of circle is : %f\n", area);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     const int fixed_value = 2 ;
//     float length,breadth,perimeter;

//     printf("For calculating perimeter of rectangle \n");
//     printf("Enter the length : ");
//     scanf("%f",&length);

//     printf("Enter the breadth : ");
//     scanf("%f",&breadth);

//     perimeter = fixed_value*(length + breadth);
//     printf("Perimeter is : %f", perimeter);

//     return 0;
// }


#include <stdio.h>

int main(){
    char a = 'A';
	int b = 20;
	// short int c = 10;
	// long int d = 200;
	// long long int e = 2000;
    float f = 3.14;
    double g = 3144641;
    // long double h = 3144641111;

    printf("The size of char is %d\n", sizeof(a));
    printf("The size of int is: %d\n", sizeof(b));
    // printf("The size of short int is: %d\n", sizeof(c));
    // printf("The size of long int is: %d\n", sizeof(d));
    // printf("The size of long long int is: %d\n", sizeof(e));
    printf("The size of float is: %d\n", sizeof(f));
    printf("The size of double is: %d\n", sizeof(g));
    // printf("The size of long double is: %d\n", sizeof(h));
   
    return 0;
}
