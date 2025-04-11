#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0, i;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Count words
    for(i = 0; str[i] != '\0'; i++) {
        // If current character is not a space and
        // (it's the first character or previous is a space), count it as a word
        if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1]))) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
