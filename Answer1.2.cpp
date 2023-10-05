vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int x=0;
    for(int i=0;i<n;i++){
        x^=A[i];
        x^=(i+1);
    }
    int i;
    for(i=31;i>=0;i--){
        if(x&(1<<i)){
            break;
        }
    }
    int p=0;
    int q=0;
    for(int j=0;j<n;j++){
        if(A[j]&(1<<i)){
            p^=A[j];
        }
        else{
            q^=A[j];
        }
        if((j+1)&(1<<i)){
            p^=(j+1);
        }
        else{
            q^=(j+1);
        }
    }
    vector<int> vec;
    int flag=0;
    for(int i=0;i<n;i++){
        if(A[i]==p){
            vec.push_back(p);
            flag=1;
            break;
        }
    }
    if(flag==1){
        vec.push_back(q);
    }
    else{
        vec.push_back(q);
        vec.push_back(p);
    }
    return vec;
}
