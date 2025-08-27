#include <stdio.h>
int main() {
    int minutes;
    int hours;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("Hours are: %d\n", hours);

    return 0;
}
