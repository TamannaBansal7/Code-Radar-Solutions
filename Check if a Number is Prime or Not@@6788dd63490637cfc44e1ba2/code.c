#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a,i;
   scanf("%d",&a);
   if(a<2){
    printf("Not Prime");
   }
   elif{
    for(i=2;i*i<=a;i++){
        if(a%i==0){
            printf("Not Prime");
        }
    }
   }
        else{
            printf("Prime");
        }
    }
   