#include <stdio.h>

int main() {
    float bytes, kb, mb, gb;

    printf("Enter size in bytes: ");
    scanf("%f", &bytes);
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("Size in KB = %f\n", kb);
    printf("Size in MB = %f\n", mb);
    printf("Size in GB = %f\n", gb);

    return 0;
}
