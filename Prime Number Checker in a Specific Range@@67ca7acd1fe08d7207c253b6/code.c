// Your code here...
void  printPrimesInRange(int a,int b){
    int count=0;
    for(int num>a;num<=b;num++){
        for(int i=1;i<num;i++){
            if(num%i==0){
                count++;
            }
            if(count<=1){
                printf("%d",num);
            }
        }
        
        
    }
}