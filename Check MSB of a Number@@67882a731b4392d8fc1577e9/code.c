// Your code here...
#include<stdio.h>
int main(){
    int a,s,n;
    scanf("%d",&a);
    s=sizeof(a)*8;
    n=n>>s-1;
    if(n&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}