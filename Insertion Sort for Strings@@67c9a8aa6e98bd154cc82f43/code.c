// Your code here...
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void insertionSort(char arr[][100],int n){
    for (int i = 1; i < n; i++) {
        char key[100]; // Temporary buffer to copy the string
        strcpy(key, arr[i]); // Copy the string

        int j = i - 1;
        while (j >= 0 && strcmp(key, arr[j]) < 0) {
            strcpy(arr[j + 1], arr[j]); // Copy the string
            j = j - 1;
        }
        strcpy(arr[j + 1], key); // Copy the string
    }
}


void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}