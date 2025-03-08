// Your code here...
#include<stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ch='A';
        for(char j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}