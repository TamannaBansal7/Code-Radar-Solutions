// Your code here...
void insertionSort(char arr[][100],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            char temp[100]=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp[100];
            j--;
        }
    }
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}