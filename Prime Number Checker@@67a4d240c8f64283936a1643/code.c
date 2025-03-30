int isprime(int num){
    int c=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            c++;
        }
    }
        if(c==1){
        return 0;
    }
     else{
        return 1;
     }
    }
}