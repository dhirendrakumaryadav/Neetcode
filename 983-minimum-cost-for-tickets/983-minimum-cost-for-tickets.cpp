class Solution {
public:
    int get(vector<int>& days,vector<int>& costs,int i,int v,vector<vector<int>>&dp){
        if(i>=days.size())return 0;
        
        if(dp[i][v]!=-1)return dp[i][v];
        if(days[i]<=v){
            return get(days,costs,i+1,v,dp);
        }
        else{
            int l=costs[0]+get(days,costs,i+1,days[i],dp);
            int m=costs[1]+get(days,costs,i+1,days[i]+6,dp);
            int r=costs[2]+get(days,costs,i+1,days[i]+29,dp);
            return dp[i][v]=min(l,min(m,r));
        }
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        int m=days[n-1]+30;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return get(days,costs,0,0,dp);
    }
};