#include <stdio.h>
int main() {
    int dollars;
    int rupees;

    printf("Enter dollars: ");
    scanf("%d", &dollars);

    rupees = dollars * 48;

    printf("Rupees are: %d\n", rupees);

    return 0;
}
