#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    char result[2000];
    int i = 0, j = 0;

    // Read two strings (each on a new line)
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    while (str1[i] != '\0') {
        if (str1[i] == '\n') break;
        result[i] = str1[i];
        i++;
    }

    // Append second string to result
    while (str2[j] != '\0') {
        if (str2[j] == '\n') break;
        result[i++] = str2[j++];
    }

    // Null-terminate the final string
    result[i] = '\0';

    printf("%s\n", result);
    return 0;
}
