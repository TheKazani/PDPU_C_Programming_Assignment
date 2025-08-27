#include <stdio.h>

int main() {
    
    float gross, discount, net;

    printf("Enter gross sales: ");
    scanf("%f", &gross);

    discount = 0.10 * gross;
    net = gross - discount;

    printf("Net Sales = %f\n", net);

    return 0;


}
