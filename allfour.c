#include <stdio.h>

int main() {
    int a, b, c;
    int sum, minus, multiply;
    float divide;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    sum = a + b + c;
    minus = a - b - c;
    multiply = a * b * c;
    divide = (float)a / b;

    printf("Sum is: %d\n", sum);
    printf("Minus is: %d\n", minus);
    printf("Multiply is: %d\n", multiply);
    printf("Divide (a/b) is: %.2f\n", divide);

    return 0;
}
