#include<stdio.h>
int main(){
int n,temp,j;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[n]);
}
arr[i]=temp;
arr[j]=arr[i];
temp=arr[j];
if(arr[i]>arr[j]){
    swap(&arr[i],arr[j]);
}
printf("%d",arr[n]);
}