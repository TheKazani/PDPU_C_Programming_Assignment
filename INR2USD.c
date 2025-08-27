#include <stdio.h>
int main() {
    int dollars;
    int rupees;

    printf("Enter rupees: ");
    scanf("%d", &rupees);

    dollars = rupees / 48;

    printf("Dollars are: %d\n", dollars);

    return 0;
}
