// Your code here...
#include<stdio.h>
#include<string.h>

void swap(char *str1,char *str2){
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}

void bubbleSort(char arr[][100],int n){
    for(int i=0;i<n;i++){
        int min_idx=-1;
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j+1],arr[j])<0){
                min_idx=j;
                swap(arr[j+1],arr[min_idx]);
            }
        }
        
    }
}

void printArray(char arr[][100],int n){
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}