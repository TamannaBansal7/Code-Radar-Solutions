int findUnsortedSubarray(int arr[],int n){
    int left=-1;
    int right=-1;
    int max=arr[0];
    int min=arr[n-1];
    for(int i=1;i<n;i++){
            if(arr[i]<max){
                right=i;
        }
        else{
            max=arr[i];
        }
    }

    for(int i=n-2;i>=0;i--){
        if(arr[i]>min){
            left=i;
        }
        else{
            min=arr[i];
        }
    }
    if(left==-1 && right==-1){
    return 0;}

    return right-left+1;
}