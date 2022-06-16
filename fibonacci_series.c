// 0, 1, 1, 2, 3, .......

#include <stdio.h>
int main() {

    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    // printing from the 3rd to nth terms
    for(i=3;i<=n;i++){
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}
