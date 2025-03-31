// Your code here...
#include<stdio.h>
#include<bool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    bool result;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            result=true;
        }
        else{
            result=false;
        }
        return result;
    }
    if(result==true){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    }

