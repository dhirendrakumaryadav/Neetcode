class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        for(int i=0;i<stones.size();i++){
            sum+=stones[i];
        }
        int n=stones.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        for(int i=0;i<=sum;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(stones[i-1]<=j){
                    dp[i][j]=dp[i-1][j-stones[i-1]]||dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        int mx=INT_MAX;
        for(int i=0;i<=sum/2;i++){
            if(dp[n][i]==1){
                mx=min(mx,sum-2*i);
            }
        }
        return mx;
        
    }
};