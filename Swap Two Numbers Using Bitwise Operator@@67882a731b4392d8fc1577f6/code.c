#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // XOR swap algorithm
    a = a ^ b;
    b = a ^ b;  // now b = original a
    a = a ^ b;  // now a = original b

    printf("%d %d\n", a, b);
    return 0;
}
