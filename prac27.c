#include <stdio.h>


int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);}

int main() {
    int n;


    printf("Enter number of months: ");
    scanf("%d", &n);


    if (n < 1) {
        printf("Invalid input! Number of months must be >= 1.\n");
        return 0;
    }

    printf("\nSavings Growth Pattern (Using Recursion):\n");


    for (int i = 1; i <= n; i++) {
        printf("Month %d: rs.%d\n", i, fib(i));
    }

    return 0;
}
