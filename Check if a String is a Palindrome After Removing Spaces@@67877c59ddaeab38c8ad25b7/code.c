#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], cleaned[1000];
    int i, j = 0, len, isPalindrome = 1;

    // Read input
    fgets(str, sizeof(str), stdin);

    // Remove spaces and store in cleaned[]
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            cleaned[j++] = str[i];
        }
    }
    cleaned[j] = '\0';

    // Check for palindrome
    len = strlen(cleaned);
    for (i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output
    if (isPalindrome)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
