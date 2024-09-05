#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Space before %c to consume the newline character.

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform the selected operation and display the result
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1; // Exit with an error code
            }
            break;
        case '%':
            if (num2 != 0) {
                result = fmod(num1, num2); // Use fmod for modulus with floating-point numbers
            } else {
                printf("Error: Modulus by zero\n");
                return 1; // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; // Exit with an error code
    }

    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0; 
}
