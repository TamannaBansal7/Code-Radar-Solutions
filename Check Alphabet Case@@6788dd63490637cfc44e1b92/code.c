#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&a);
    if(ch>=A && ch<=Z){
        printf("Uppercase");
    }
    else if(ch>=a && ch<=z){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}