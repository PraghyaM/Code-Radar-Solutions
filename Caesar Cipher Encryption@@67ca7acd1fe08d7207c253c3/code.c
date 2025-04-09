#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char *message, int shift, char *encrypted) {
    int i = 0;
    while (message[i] != '\0') {
        char ch = message[i];
        
        if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = ((ch - 'a' + shift + 26) % 26) + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = ((ch - 'A' + shift + 26) % 26) + 'A';
        }
        else {
            encrypted[i] = ch; // Non-alphabet characters unchanged
        }
        
        i++;
    }
    encrypted[i] = '\0'; // Null terminate
}

int main() {
    char message[200];
    int shift;
    char encrypted[200]; // Store the encrypted message

    // Read the input message
    scanf("%[^\n]%*c", message); // Read entire line including spaces

    // Read the shift value
    scanf("%d", &shift);

    // Normalize the shift to the range [0, 25]
    shift = shift % 26;
    if (shift < 0) shift += 26; // Handle negative shifts

    // Call the caesarCipher function
    caesarCipher(message, shift, encrypted);

    // Output the encrypted message
    printf("%s\n", encrypted);

    return 0;
}
