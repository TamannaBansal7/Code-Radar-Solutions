// Your code here...
#include<stdio.h>
#include<stdbool.h>
int monotonic(int n,int arr[]){
    bool increasing=true;
    bool decreasing=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            increasing=false;
        }
        if(arr[i]<arr[i+1]){
            decreasing=false;
        }
    }
    return increasing || decreasing;
}

int main(){
    int n;
    int result;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    if(monotonic(n,arr)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
