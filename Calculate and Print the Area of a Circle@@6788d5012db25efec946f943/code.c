#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r,area;
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area: %.2f",area);
    return 0;
}