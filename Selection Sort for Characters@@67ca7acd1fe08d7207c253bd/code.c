// Your code here...
#include<stdio.h>
#include<limits.h>
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=CHAR_MAX;
        int minidx=-1;
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        }
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }

}

void printArray(char arr[],int n){
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}