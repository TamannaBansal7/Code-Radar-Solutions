#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N,i,j,space;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(space=0;space<N-i-1;space++){
            printf(" ");
        }
    }
    for(j=0;j<2*i+1;j++){
        printf("*");
    }
    printf("\n");
}