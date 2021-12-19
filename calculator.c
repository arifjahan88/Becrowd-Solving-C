#include <stdio.h>
int main() {
    char operator;
    double num1, num2;

    printf("Please enter an operator (+, -, *, /) : ");
    scanf("%c", &operator);

    printf("Please enter First operands : ");
    scanf("%lf", &num1);
    printf("Please enter Second operands : ");
    scanf("%lf", &num2);

    switch (operator) {
    case '+':
        printf("Summation is = %.2lf\n", num1 + num2);
        break;
    case '-':
        printf("Subtraction is = %.2lf\n", num1 - num2);
        break;
    case '*':
        printf("Multiplication is = %.2lf\n", num1 * num2);
        break;
    case '/':
        printf("Divide is = %.2lf\n", num1 / num2);
        break;

    default:
        printf("Error! operator is not correct\n");
    }

    return 0;
}
