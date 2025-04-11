#include <stdio.h>
#include <string.h>

// Function to implement Bubble Sort for strings
void bubbleSort(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                // Swap arr[j] and arr[j+1]
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n; // Variable to store the number of strings
    scanf("%d", &n);

    char arr[50][100]; // Declares an array of strings with maximum length 100

    // Read the strings from user input
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Call the BubbleSort function
    bubbleSort(arr, n);

    // Display the sorted array of strings
    printArray(arr, n);

    return 0;
}
