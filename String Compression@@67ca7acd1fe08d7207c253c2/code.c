// Your code here...
#include<stdio.h>
#include<string.h>
void compressString(char str[100],char compressed){
    int count=0;
    for(int i=0;i<strlen(str);i++){
        count++;
    }
    return str[0]+count;
}