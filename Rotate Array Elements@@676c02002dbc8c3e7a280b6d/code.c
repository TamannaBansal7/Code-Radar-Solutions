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

void rotatearray(int arr[]int n,int k){
    k=k%n;
    if(k<0){
        k=k+n;
    }

    reverseArray(arr,0,k);
    reverseArray(arr,0,n-1);
    reverseArray(arr,k,n-1);
}

int main() {
    int n, k;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}