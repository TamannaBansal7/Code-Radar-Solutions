// Your code here...
#include<stdio.h>
void reversearray(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        end--;
    }
}

void rotatearray(int arr[],int n,int k){
    k=k%n;
    if(k<0){
        k=k+n;
    }

    reversearray(arr,0,n-1);
    reversearray(arr,0,k-1);
    reversearray(arr,k,n-1);
}

int main() {
    int n, k;
    int arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    rotatearray(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}