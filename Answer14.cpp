long int Pow(int X,int n){
    long int result = 1;
    for(int i=1; i<=n; i++){
        result *= X;
    }
    
    return result;
}