#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], result[1000];
    int i = 0, j = 0;

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Check each character
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (!(ch >= 'a' && ch <= 'z') || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            result[j++] = str[i];
        }
        i++;
    }

    // Null terminate the result string
    result[j] = '\0';

    // Print the final result
    printf("%s", result);
    return 0;
}
