#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, isBinary = 1;

    // Read the input string
    scanf("%s", str);

    // Check each character
    while (str[i] != '\0') {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
        i++;
    }

    // Output result
    if (isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
