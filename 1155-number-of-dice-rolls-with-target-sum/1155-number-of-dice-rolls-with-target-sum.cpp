class Solution {
public:
       #define q 1000000007
    int get(int n,int k,int t, vector<vector<int>>&dp){
      
        if(t==0&&n==0){
            return 1;
        }
        if(t<=0||n<=0)return 0;
        if(dp[n][t]!=-1)return dp[n][t];
       
      int w=0;
     
        for(int i=1;i<=k;i++){
           
            w=(w%q+get(n-1,k,t-i,dp)%q)%q;
            
        }
      return dp[n][t]=w;
    }
    int numRollsToTarget(int n, int k, int target) {
         vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return get(n,k,target,dp);
    
    }
};