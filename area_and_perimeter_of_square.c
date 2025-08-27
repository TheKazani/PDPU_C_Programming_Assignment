#include <stdio.h>

int main() {
    float L, area, perimeter;

    printf("Enter side length of square: ");
    scanf("%f", &L);

    area = L * L;       
    perimeter = 4 * L; 

    printf("Area of square = %f\n", area);
    printf("Perimeter of square = %f\n", perimeter);

    return 0;



    
}
