#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest_even = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > largest_even) {
                largest_even = arr[i];
            }
        }
    }

    printf("%d\n", largest_even);

    return 0;
}
