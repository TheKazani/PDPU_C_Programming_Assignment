#include <stdio.h>

int main() {
    float dollars, rupees, pounds;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;

    pounds = rupees / 70;

    printf("Amount in pounds = %f\n", pounds);

    return 0;
}
