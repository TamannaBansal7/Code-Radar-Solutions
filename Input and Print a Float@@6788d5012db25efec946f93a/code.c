#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    int a;
    scanf("%f",&a);
    printf("%f",a);
    return 0;
}