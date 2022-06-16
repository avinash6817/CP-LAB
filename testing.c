// #include <stdio.h>
// int main()
// {
// 	int a = 1;
// 	char b = 'G';
// 	double c = 3.14;
// 	printf("Hello World!\n");
// 	printf("Hello! I am a character. My value is %c and "
// 		"my size is %lu byte.\n",
// 		b, sizeof(char));

// 	printf("Hello! I am an integer. My value is %d and "
// 		"my size is %lu bytes.\n",
// 		a, sizeof(int));

// 	printf("Hello! I am a double floating point variable."
// 		" My value is %lf and my size is %lu bytes.\n",
// 		c, sizeof(double));

// 	printf("Bye! See you soon. :)\n");

// 	return 0;
// }


// C program to demonstrate explicit type casting
// #include<stdio.h>

// int main()
// {

// 	// Explicit conversion from double to int
// 	double x = 1.2;
// 	int sum = x + 1;

// 	printf("sum = %lf", sum);

// 	return 0;
// }


// #include <stdio.h>

// int main()
// {  

//     char c = -129;
//     printf("%c %d", c, c);
//     return 0;

// }

// #include <stdio.h>

// int main(){
//    int rem  = 1%10; 
//     printf("rem is %d", rem);

//     return 0;
// }

#include<stdio.h>
int main(){
    int a[2][3]= {{1,1},{2,2}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
