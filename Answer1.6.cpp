class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
        vector<int> v1;
        vector<int> v2;
        vector<int> v;
        int n=intervals.size();
        if(n==1||n==0){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        int i=0,j=1,flag=0;
        while(i<n && j<n){
            v.clear();
            v1=intervals[i];
            v2=intervals[j];
            i++;
            j++;
            v.push_back(v1[0]);
            if(v2[0]<=v1[1]){
                v.push_back(max(v1[1],v2[1]));
                intervals[i]=v;
                flag=1;
            }
            else{
                v.push_back(v1[1]);
                vec.push_back(v1);
                flag=0;
            }
        }
        if(flag==1){
            vec.push_back(intervals[i]);
        }
        else{
            vec.push_back(intervals[j-1]);
        }
        return vec;
    }
};
