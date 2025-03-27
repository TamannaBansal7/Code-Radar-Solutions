#include<stdio.h>
void bubbleSort(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int printArray(int n,int arr[n]){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    bubbleSort(n, arr);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}


