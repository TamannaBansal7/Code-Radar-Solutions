// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}
selectionSort(int n;int arr[]){
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
