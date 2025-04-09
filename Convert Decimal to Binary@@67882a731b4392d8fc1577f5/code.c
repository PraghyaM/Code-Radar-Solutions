#include <stdio.h>

void printBinary(unsigned int n) {
    int started = 0; // to skip leading zeros

    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit)
            started = 1;
        if (started)
            printf("%d", bit);
    }

    if (!started)
        printf("0"); // case for input 0
}

int main() {
    unsigned int n;
    scanf("%u", &n);

    printBinary(n);
    printf("\n");

    return 0;
}
