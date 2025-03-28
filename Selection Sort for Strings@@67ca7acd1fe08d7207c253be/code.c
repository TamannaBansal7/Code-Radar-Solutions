#include<stdio.h>
#include<string.h>


void swap(char *str1,char*str2){
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}

void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i;j<n;j++){
            if(strcmp(arr[j],arr[min_idx])<0){
                min_idx=j;
            }

        }
        swap(arr[min_idx],arr[i]);
    }
}

void printArray(char arr[][100],int n){
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}