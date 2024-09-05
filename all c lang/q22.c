#include <stdio.h>

int main() {
    double number1, number2, result;
    char operator;

    
    printf("Enter the first number: ");
    scanf("%lf", &number1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &number2);

    
    switch (operator) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
            } else {
                printf("Error: Division by zero\n");
                return 1;  
            }
            break;
        case '%':
            if (number2 != 0) {
                result = fmod(number1, number2); 
            } else {
                printf("Error: Modulus by zero\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;  
    }


    printf("Result: %.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);

    return 0;  
}
