#include<stdio.h>
#include<string.h>
void insertionSort(char arr[][100],int n){
    for(int i=0;i<n;i++){
        char key[100];
        strcpy(key,arr[i]);
        j=i-1;
        while(j>=0 && strcmp(key,arr[j])<0){
            strcpy(arr[j+1],arr[j]);
            j=j-1;
        }
        strcpy(key,arr[j+1]);
    }
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}