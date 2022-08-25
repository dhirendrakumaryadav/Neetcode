class Solution {
public:
    int  get(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&dp){
        if(i==0&&j==0)return grid[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int m=INT_MAX;
        if(j>0){
            m=grid[i][j]+get(grid,i,j-1,dp);
        }
         if(i>0){
            int s=grid[i][j]+get(grid,i-1,j,dp);
             m=min(m,s);
        }
        dp[i][j]=m;
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return get(grid,m-1,n-1,dp);
      
    }
};