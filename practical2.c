#include <stdio.h>

int main() {

    char operator;
    float number1, number2;
    float value;

    printf("Enter [number 1] [operator: + - * /] [number 2]\n");
    scanf("%f %c %f", &number1, &operator, &number2);

    switch (operator) {
    case '+':
        value = number1 + number2;
        printf("%.2f %c %.2f = %.2f", number1, operator, number2, value);
        break;

    case '-':
        value = number1 - number2;
        printf("%.2f %c %.2f = %.2f", number1, operator, number2, value);
        break;

    case '*':
        value = number1 * number2;
        printf("%.2f %c %.2f = %.2f", number1, operator, number2, value);
        break;

    case '/':
        if (number2 != 0) {
            value = number1 / number2;
            printf("%.2f %c %.2f = %.2f", number1, operator, number2, value);
        } else {
            printf("Error: Division by zero is undefined");
        }
        break;

    default:
        printf("Invalid operator");
        break;
    }

    return 0;
}
