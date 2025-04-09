#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array first
    qsort(arr, n, sizeof(int), compare);

    int minDiff = abs(arr[1] - arr[0]);
    int num1 = arr[0];
    int num2 = arr[1];

    // Find the pair with minimum absolute difference
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i+1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i+1];
        }
    }

    // Output the two numbers in ascending order
    if (num1 < num2)
        printf("%d %d\n", num1, num2);
    else
        printf("%d %d\n", num2, num1);

    return 0;
}

