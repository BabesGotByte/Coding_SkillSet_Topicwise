int maxLen(int A[], int n)
{
    int sum=0;
    int maxv=0;
    int count=0;
    map<int,int> m;
    m[0]=-1;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(m.find(sum)!=m.end()){
            count=i-m[sum];
            maxv=max(maxv,count);
        }
        else{
            if(m.find(sum)==m.end()){
                m[sum]=i;    
            }
        }
    }
    return maxv;
}
