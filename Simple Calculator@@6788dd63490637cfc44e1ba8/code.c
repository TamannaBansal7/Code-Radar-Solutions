#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }
    elif(c=='-'){
        printf("%d",a-b);
    }
    elif(c=='*'){
        printf("%d",a*b);
    }
    elif(c=='/'){
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;
}