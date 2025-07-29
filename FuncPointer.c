#include <stdio.h>

// Define functions for different operations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; } // Avoid division by zero

int main() {
    int choice, x, y;
    int (*operation)(int, int); // Declare a function pointer

    // User input for operation choice and operands
    printf("Choose an operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Dynamically assign the appropriate function to the pointer
    switch (choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        case 4:
            operation = divide;
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    // Invoke the function through the pointer
    printf("Result: %d\n", operation(x, y)); // Calls the assigned function dynamically

    return 0;
}
