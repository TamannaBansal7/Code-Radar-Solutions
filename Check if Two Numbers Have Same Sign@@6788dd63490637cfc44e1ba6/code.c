#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=1 && b>=1 || a<=1 && b<=1){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}