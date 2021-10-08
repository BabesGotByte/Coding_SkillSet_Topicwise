class Solution {
public:
    void nextPermutation(vector<int>& v) {
            int id=-1;
            int n=v.size();
			if(n==1)
			return;
			for(int i=n-2;i>=0;i--){
				if(v[i]<v[i+1]){
					id=i;
					break;
				}
			}
			if(id==-1){
				reverse(v.begin(),v.end());
				return;
			}
			int x=id+1;
			for(int i=n-1;i>x;i--){
				if(v[i]>v[id]){
                    x=i; 
                    break;
                }
			}
			swap(v[id],v[x]);
			reverse(v.begin()+id+1,v.end());
    }
};
