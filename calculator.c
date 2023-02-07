#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main() {
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+, -, *, /)");

    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Answer: %.2lf\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Answer: %.2lf\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Answer: %.2lf\n", result);
    } else if (operator == '/') {
        result = num1 / num2;
        printf("Answer: %.2lf\n", result);
    } else {
        printf("Invalid input Use (+, -, *, /)");
    }

    return 0;
}