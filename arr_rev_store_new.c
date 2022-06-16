#include <stdio.h>
int main(){
    int n, i, j;
    printf("\nEnter the number of elements:");
    scanf("%d", &n);

    int a[n], b[n];

    printf("\nEnter the array elements:");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0, j = n - 1; i < n; i++, j--)
        b[i] = a[j];

    printf("\nThe original array is:");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\nThe reversed array is:");
    for (i = 0; i < n; i++){
        printf("%d ", b[i]);
    }

    return 0;
}
