#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(i==1 || i==N || j==1 || j==N){
                printf("*");
            }
            else{
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}