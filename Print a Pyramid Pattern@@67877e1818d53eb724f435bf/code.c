#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N,i,j,space;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(space=1;space<=N-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}