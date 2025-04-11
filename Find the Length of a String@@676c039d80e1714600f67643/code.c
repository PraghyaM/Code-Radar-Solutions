#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    // Read input string
    scanf("%s", str);

    // Count characters until null character
    while (str[length] != '\0') {
        length++;
    }

    printf("%d\n", length);
    return 0;
}
