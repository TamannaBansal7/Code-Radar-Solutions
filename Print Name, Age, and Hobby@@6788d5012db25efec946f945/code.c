#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100],c[100];
    int b;
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s\,Age: %s,Hobby: %s",a,b,c);
    return 0;
}