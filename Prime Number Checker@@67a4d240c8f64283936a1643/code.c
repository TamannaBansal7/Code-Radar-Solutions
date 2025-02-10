#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,fact_count;
    printf("Input a positive number:");
    scanf("%d",&n);
    fact_count=isPrime(n);
    if(fact_count==2)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    return 0;
}