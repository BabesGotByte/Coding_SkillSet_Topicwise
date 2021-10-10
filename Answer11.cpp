int maxProfit(vector<int>& prices) {
        int maxprofit=INT_MIN;
        int minprice=INT_MAX;
        for(auto x:prices)
        {
            int currprofit=x-minprice;
            maxprofit=max(maxprofit,currprofit);
            minprice=min(minprice,x);
        }
        if(maxprofit<0)return 0;
        else return maxprofit;
    }
int main()
{
  int n;
  cin>>n;
  vector<int>p;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    p.push_back(x);
  }
  int ans=maxProfit(p);
  out<<ans<<endl;
  return 0;
}
