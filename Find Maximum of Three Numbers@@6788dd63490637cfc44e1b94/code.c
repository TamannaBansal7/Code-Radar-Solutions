#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b and a>=c){
        return a;
    }
    elseif(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
    return 0;
}