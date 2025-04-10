// Your code here...
int searchInRotatedArray(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(target==i){
            return arr[i];
        }
        else{
            return -1;
        }
    }
}