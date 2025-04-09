#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    int expectedSum = (n-1) * n / 2; // Sum of numbers from 1 to (N-1)

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int duplicate = sum - expectedSum;
    printf("%d\n", duplicate);

    return 0;
}
