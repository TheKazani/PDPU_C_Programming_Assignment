#include <stdio.h>

int main() {
    float grams, kg;
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    kg = grams / 1000;

    printf("Weight in kilograms = %f\n", kg);

    return 0;


    
}
