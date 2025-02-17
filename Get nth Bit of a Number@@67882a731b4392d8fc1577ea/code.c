// Your code here...
#include<stdio.h>
int main(){
    int a,n,result;
    scanf("%d %d",&a,&n);
    result=(a>>n)&1;
    printf("%d",result);
    return 0;
}