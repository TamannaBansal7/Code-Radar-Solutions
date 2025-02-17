// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int result=~(1<<n);
    printf("%d",result);
}