#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  int a,i,j=0;
  scanf("%d",&a);
  if(a<2){
    printf("Not Prime");
  }
  else{
    for(i=1;i<=a;i++){
        if(a%i==0){
            j++;
        }
        if(j>2){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
  }
    }
   