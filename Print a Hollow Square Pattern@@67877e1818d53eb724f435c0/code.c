#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("*");
   }
   printf("\n ");
   for(i=0;i<n-2;i++){
    for(j=0;j<n-2;j++){
        printf(" ");
    }
    printf("*\n");
   }
   if(n>1){
    for(i=0;i<n;i++){
        printf("*");
    }
   }
    return 0;
}