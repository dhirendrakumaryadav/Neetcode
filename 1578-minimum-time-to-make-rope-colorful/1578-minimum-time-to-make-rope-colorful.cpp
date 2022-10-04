class Solution {
public:
    int minCost(string colors, vector<int>& Time) {
        int mc=0;
        int res=0;
        int n=colors.size();
        for(int i=0;i<n;i++){
            if(i>0&&colors[i]!=colors[i-1]){
                mc=0;
            }
            res+=min(mc,Time[i]);
            mc=max(mc,Time[i]);
        }
        return res;
    }
};