// Your code here...
#include<stdio.h>
int main(){
    int n,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        b=1;
        for(int j=1;j<=i;j++){
            printf("%d",b);
        }
        printf("\n");
        b++;
    }
}