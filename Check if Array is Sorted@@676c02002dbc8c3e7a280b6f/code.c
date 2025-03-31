// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    bool result=true;;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            result=false;
        }
        break;
       // return result;
    }
    if(result){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    }

