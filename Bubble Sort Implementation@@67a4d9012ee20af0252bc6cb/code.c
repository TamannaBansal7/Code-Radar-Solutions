#include<stdio.h>
void bubbleSort(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int printArray(int n,int arr[]){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[n]);
    }
    bubbleSort(n, arr[i]);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}


