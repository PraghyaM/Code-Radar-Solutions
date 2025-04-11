#include <stdio.h>
#include <ctype.h> // for tolower()

int main() {
    char str[100];
    int count = 0;

    // Read the string
    scanf("%s", str);

    // Loop through each character
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Make it lowercase to handle both 'A' and 'a'
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    // Output the number of vowels
    printf("%d\n", count);

    return 0;
}
