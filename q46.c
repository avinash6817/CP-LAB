//Q--> Write a program in C to reverse elements of 1D Array and store in another Array

#include <stdio.h>

int main(){
    int i, n, temp;

    printf("Enter size of Array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Printing array
    printf("Original Array are : ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    // Reversing array
    for (i = 0; i < n / 2; i++){ 
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    // printing non reversed array
    printf("\nReverse Array are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}




// Printing the reverse element of an Array

// #include <stdio.h>

// int main(){
//     int a[20],i,n;

//     printf("Enter the size of Array : ");
//     scanf("%d",&n);

//     printf("Now Enter the elements of %d Array size: ", n);
//     for(i=0;i<n;i++)
//         scanf("%d",&a[i]);

//     printf("Original Array are : ");
//     for(i=0;i<n;i++)
//         printf("%d,",a[i]);


//     printf("\nReverse Array are :");
//     for(i=n-1;i>=0;i--)
//         printf("%d,",a[i]);
        
//     return 0;
// }
