// Your code here...
void selsectionSort(char arr[n][],int n){
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i;j<=n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
    }

    if(arr[min_idx]==arr[j]){
            int temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
    }
}

void printArray(char arr[n][],int n){
    selectionSort(arr,n);
    for(int i=0;i<n;j++){
        printf("%s",arr[n][i]);
    }
}