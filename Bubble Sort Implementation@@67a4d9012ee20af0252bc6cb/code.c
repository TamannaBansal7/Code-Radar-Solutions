#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
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