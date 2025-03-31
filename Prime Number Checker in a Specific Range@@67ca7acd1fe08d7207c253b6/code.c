// Your code here...
void  printPrimesInRange(int a,int b){
    int count=0;
    for(int num=a;num<=b;num++){
        if(num<=1){
            continue;
        }
        if (num == 2) { // 2 is a special case
            printf("%d ", num);
            continue;
        }
        int isPrime = 1; 
        for(int i=2;i<num;i++){
            if(num%i==0){
                count++;
            }
            if(count==2){
                printf("%d",num);
            }
        }
        
        
    }
}