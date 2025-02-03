#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a;
   scanf("%d",&a);
   if(isPrime(a)){
    printf("Prime");
   }
   else{
    printf("Not Prime");
   }