class Solution {
public:
    int get(vector<int>&cost,int n,int &c,int i,vector<int>&dp){
        if(n<2)return cost[n];
        if(dp[n]!=-1)return dp[n];
        return dp[n]=min((cost[n]+get(cost,n-1,c,i,dp)),(cost[n]+get(cost,n-2,c,i,dp)));
     
     
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int c=0;
        vector<int>dp(n+1,-1);
        return min(get(cost,n-1,c,0,dp),get(cost,n-2,c,0,dp));
    }
};