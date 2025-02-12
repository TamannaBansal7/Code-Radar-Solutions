// Your code here...
#include<stdio.h>
int main(){
    int n,result,i;
    scanf("%d",&n);
    result=0;
    for(i=1;i<=10;i++){
        result=n*i;
        printf(%d*%d=%d\n,n,i,result);
    }
    return 0;
}