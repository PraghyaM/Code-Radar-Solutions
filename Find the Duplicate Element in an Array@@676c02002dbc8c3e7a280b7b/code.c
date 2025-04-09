#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[n]; 

    // Initialize frequency array to 0
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    // Read and process input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= n) {
            // If number is out of range, invalid input
            printf("Invalid input\n");
            return 1;
        }
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    // If no duplicate found (ideally shouldn't happen)
    printf("No duplicate\n");
    return 0;
}

