class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf=0;
        int minimalPrice=INT_MAX;
        for(int i=0; i < prices.size(); i++){
            minimalPrice= min(minimalPrice,prices[i]);
            maxProf= max(maxProf, prices[i]-minimalPrice);
        }
        return maxProf;
    }
};
