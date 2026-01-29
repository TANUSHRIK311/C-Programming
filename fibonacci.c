#include <stdio.h>

// Function prototype
int fib(int n);

int main() {
    int n, result;

    // Input n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if(n < 0) {
        printf("Error: Input must be a positive integer.\n");
        return 1;
    }

    // Call recursive function
    result = fib(n);

    // Print result
    printf("The %dth Fibonacci number is %d.\n", n, result);

    return 0;
}

// Recursive function to calculate Fibonacci
int fib(int n) {
    if(n == 0)
        return 0;   // Base case
    else if(n == 1)
        return 1;   // Base case
    else
        return fib(n - 1) + fib(n - 2); // Recursive call
}
