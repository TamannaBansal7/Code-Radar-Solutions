#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num;
   scanf("%d",&num);
   if(num<=1){
    printf("Not Prime");
   }
   if(num==2){
    printf("Prime");
   }
   for(int i=3;i*i<=num;i+2){
    if(num%i==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
   }