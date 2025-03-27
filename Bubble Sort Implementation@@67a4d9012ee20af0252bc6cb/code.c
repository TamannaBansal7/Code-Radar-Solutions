#include <stdio.h>

void bubbleSort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) { // Corrected loop condition
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int printArray() { // Removed n parameter
    int n;
    scanf("%d", &n);
    int arr[n]; // VLA, works in C99 and later

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Removed space
    }

    bubbleSort(n, arr);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Added space
    }
    printf("\n"); //Added newline for readability.
    return 0;
}

