#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    int count = 0;

    if (n == 0) {
        printf("32\n"); // for 32-bit numbers, all bits are 0
        return 0;
    }

    while ((n & 1) == 0) {
        n >>= 1;
        count++;
    }

    printf("%d\n", count);
    return 0;
}
