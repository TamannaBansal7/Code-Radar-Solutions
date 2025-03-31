// Your code here...
#include<stdio.h>
#include<string.h>
void insertionSort(char arr[][100],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && strcmp(arr[j],arr[j-1])<0){
            char temp[100]=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}