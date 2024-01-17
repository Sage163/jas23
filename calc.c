#include <stdio.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
int main() {
    float num1, num2, result;
    char operation;

    // Get user input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);  // Note the space before %c to consume the newline character

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the requested operation
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        default:
            printf("Error: Invalid operation\n");
            return 1;  // Exit with an error code
    }

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;
}

// Function definitions
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}
