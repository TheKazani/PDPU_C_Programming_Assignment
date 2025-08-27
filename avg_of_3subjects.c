#include <stdio.h>

int main() {
    float s1, s2, s3, total, average;

    printf("Enter marks of subject 1: ");
    scanf("%f", &s1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &s2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &s3);

    total = s1 + s2 + s3;
    average = total / 3;

    printf("Total Marks = %f\n", total);
    printf("Average Marks = %f\n", average);

    return 0;




    
}
