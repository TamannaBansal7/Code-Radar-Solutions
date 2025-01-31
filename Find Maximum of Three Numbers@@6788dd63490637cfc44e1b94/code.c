#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b and a>=c){
        printf("%d",a);
    }
    elseif(b>=a && b>=c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}