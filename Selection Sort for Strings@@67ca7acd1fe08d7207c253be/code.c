#include <stdio.h>
#include <string.h>

// Function to swap two strings
void swap(char *str1, char *str2) {
    char temp[100]; // Assuming maximum string length is 100
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// Function to perform Selection Sort on an array of strings
void selectionSort(char arr[][100], int n) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            // Compare strings using strcmp
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
    }
}

void printArray(char arr[][100],int n){
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}

