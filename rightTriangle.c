#include <stdio.h>

// Function prototype
int find(int N);

int main() {
    int N;

    // Input number of dots
    printf("Enter number of dots: ");
    scanf("%d", &N);

    // Call the function
    if(find(N))
        printf("We can create Right Triangle of dots with %d dots\n", N);
    else
        printf("We can't create Right Triangle of dots with %d dots\n", N);

    return 0;
}

// Function definition
int find(int N) {
    int k = 1;
    int sum = 0;

    while(sum < N) {
        sum = k * (k + 1) / 2;  // Triangular number formula
        if(sum == N)
            return 1; // Yes, triangle can be formed
        k++;
    }

    return 0; // No, cannot form triangle
}
