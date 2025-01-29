#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    str a;
    scanf("%s"&a);
    printf("You entered: %s",a);
    return 0;
}