// Your code here...
#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int result=~(1<<n);
    printf("%d",result);
}