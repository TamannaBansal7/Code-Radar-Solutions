// Your code here...
#include<stdio.h>
#include<stdbool.h>
int monotonic(int n,int arr[]){
    int result;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true){
            result=1;
        }
    }
    for(int i=n;i>0;i--){
        bool flag=true;
        for(int j=n;j>n-i-1;j--){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true){
            result=2;
        }
    }
    return result;
}

int main(){
    int n;
    int result;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    monotonic(n,arr);
    if(result==1 || result==2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
