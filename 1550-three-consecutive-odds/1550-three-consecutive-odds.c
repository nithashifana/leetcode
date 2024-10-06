bool threeConsecutiveOdds(int* A, int arrSize) {
    int n = 0;
    for(int i = 0; i < arrSize; i ++) {
        if(A[i]%2 == 0){
            n = 0;
        }
        else 
            n ++;
        
        if( n == 3){
            break;
        }
    }return n>=3;
}