// Your code here...
#include <stdio.h>
#include <stdlib.h>

int smallestWindowToSort(int arr[], int n) {
    int left = -1, right = -1;
    int max = arr[0];
    int min = arr[n - 1];

    // Find the rightmost unsorted element
    for (int i = 1; i < n; i++) {
        if (arr[i] < max) {
            right = i;
        } else {
            max = arr[i];
        }
    }

    // Find the leftmost unsorted element
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > min) {
            left = i;
        } else {
            min = arr[i];
        }
    }

    // If the array is already sorted
    if (left == -1 && right == -1) {
        return 0;
    }

    return right - left + 1;
}

int abc() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int *arr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("%d\n", smallestWindowToSort(arr, n));
        free(arr);
    }

    return 0;
}