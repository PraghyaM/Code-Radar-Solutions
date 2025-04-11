#include <stdio.h>
#include <string.h> // for strlen()

int main() {
    char str[100];
    int isPalindrome = 1;

    // Read the string
    scanf("%s", str);

    int len = strlen(str);

    // Compare characters from start and end
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
