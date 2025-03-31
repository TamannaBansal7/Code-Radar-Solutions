// Your code here...
void  printPrimesInRange(int a,int b){
    //int count=0;
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
                isPrime=0;
                break;
            }
            
        }
        if(isPrime){
                printf("%d ",num);
            }
        if(isPrime==0){
        printf("No Prime Numbers");
        break;
    }
        
    }

    
}