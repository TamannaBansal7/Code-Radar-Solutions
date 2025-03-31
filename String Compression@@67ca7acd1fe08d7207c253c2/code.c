// Your code here...
int compressString(char str[100],char compressed){
    int count=0;
    for(int i=0;i<strlen(str);i++){
        count++;
    }
    return str[0]+count;
}