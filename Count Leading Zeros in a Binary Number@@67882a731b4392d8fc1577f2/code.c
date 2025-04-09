#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    int count = 0;

    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1)
            break;
        count++;
    }

    printf("%d\n", count);
    return 0;
}
