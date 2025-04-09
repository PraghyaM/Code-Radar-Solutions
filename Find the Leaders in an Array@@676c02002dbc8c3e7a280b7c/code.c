#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFromRight = arr[n-1];

    // Temporary array to store leaders
    int leaders[n];
    int count = 0;

    // Last element is always a leader
    leaders[count++] = maxFromRight;

    // Traverse the array from right to left
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    // Print leaders in correct order (reverse)
    for (int i = count-1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    printf("\n");
    return 0;
}
