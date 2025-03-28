void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            bool flag=true;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
         flag=false;
    }
    if(flag==true){
        return 0;
    }
}


void printArray(int arr[],int n){
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
