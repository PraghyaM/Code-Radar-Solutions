int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first element which is greater than the next one from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If no such element found, array is already sorted
    if (start == -1)
        return 0;

    // Find the first element which is smaller than the previous one from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find min and max in the subarray arr[start..end]
    int min = arr[start], max = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Extend the window to the left if needed
    for (int i = 0; i < start; i++) {
        if (arr[i] > min) {
            start = i;
            break;
        }
    }

    // Extend the window to the right if needed
    for (int i = n - 1; i > end; i--) {
        if (arr[i] < max) {
            end = i;
            break;
        }
    }

    return (end - start + 1);
}
