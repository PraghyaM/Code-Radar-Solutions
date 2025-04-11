#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[1000], word[100], shortest[100];
    int i = 0, j = 0, minLen = INT_MAX;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    
    // Add space at the end to process the last word
    strcat(str, " ");

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (strlen(word) < minLen) {
                    minLen = strlen(word);
                    strcpy(shortest, word);
                }
                j = 0;  // Reset word index
            }
        }
        i++;
    }

    // Output
    printf("%s\n", shortest);

    return 0;
}
