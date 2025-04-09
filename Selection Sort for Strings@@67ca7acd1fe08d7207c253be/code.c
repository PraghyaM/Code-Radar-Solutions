#include <stdio.h>
#include <string.h>

// Function to perform selection sort
void selectionSort(char arr[][100], int n) {
    int i, j, min_idx;
    char temp[100];
    
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        if (min_idx != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}

// Function to print the array
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;
    
    // Read the number of strings
    scanf("%d", &n);
    char arr[n][100];  // Array of strings with max length 100

    // Read each string from input
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Call the selectionSort function
    selectionSort(arr, n);

    // Print the sorted array of strings
    printArray(arr, n);
    return 0;
}

