#include <stdio.h>

// Function prototype
float calculate(float num1, float num2, char op);

int main() {
    float num1, num2, result;
    char op;

    // Input numbers and operator
    printf("Enter two numbers and an operator (+,-,*,/): ");
    scanf("%f %f %c", &num1, &num2, &op);

    // Call the function
    result = calculate(num1, num2, op);

    // Print result
    printf("Result = %.2f\n", result);

    return 0;
}

// Function definition
float calculate(float num1, float num2, char op) {
    if(op == '+')
        return num1 + num2;
    else if(op == '-')
        return num1 - num2;
    else if(op == '*')
        return num1 * num2;
    else if(op == '/') {
        if(num2 != 0)
            return num1 / num2;
        else {
            printf("Error: Division by zero!\n");
            return 0;
        }
    } else {
        printf("Error: Invalid operator!\n");
        return 0;
    }
}
