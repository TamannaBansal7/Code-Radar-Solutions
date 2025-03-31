// Your code here...
int binarySearch(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]=target){
            return mid;
        }
        if(arr[mid]>target){
            right=right-1;
        }
        if(arr[mid]<target){
            left=left+1;
        }
    }
    return -1;
}