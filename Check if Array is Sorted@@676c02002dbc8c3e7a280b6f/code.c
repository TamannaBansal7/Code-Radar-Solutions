// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(i<n){
        if(arr[i]<arr[i+1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
        i++;
    }
}
