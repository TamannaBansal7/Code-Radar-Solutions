#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    scanf("%s",&a);
    printf("You entered: %s",a[100]);
    return 0;
}