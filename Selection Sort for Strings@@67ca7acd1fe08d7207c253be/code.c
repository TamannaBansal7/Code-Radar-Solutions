// Your code here...
void selsectionSort(int n,char arr[n]){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i;j<=n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
    }
    int min_idx;
    if(arr[min_idx]==arr[j]){
            int temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
    }
}

void printArray(int n,char arr[n]){
    selectionSort(arr,n);
    for(int i=0;i<n;j++){
        printf("%s",arr[n][i]);
    }
}