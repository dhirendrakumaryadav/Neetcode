class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=INT_MIN;
        int m=INT_MAX;
        for(int i=0;i<prices.size();i++){
            m=min(m,prices[i]);
            mp=max(mp,prices[i]-m);
        }
        return mp;
    }
};