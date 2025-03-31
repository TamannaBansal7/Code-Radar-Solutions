// Your code here...
void  printPrimeInRange(int a,int b){
    int count=0;
    for(int num=a;num<=b;num++){
        for(int i=0;i<num;i++){
            if(num%i==0){
                printf("%d",num);
            }
        }
        
    }
}