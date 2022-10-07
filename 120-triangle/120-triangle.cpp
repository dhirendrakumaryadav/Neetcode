class Solution {
public:

    int get(vector<vector<int>>& triangle,int i,int n,int j, vector<vector<int>>&dp){
        if(i==n)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int r=INT_MAX;
        int l=triangle[i][j]+get(triangle,i+1,n,j,dp);
       
            r=triangle[i][j]+get(triangle,i+1,n,j+1,dp);
        
        return dp[i][j]=min(l,r);
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return get(triangle,0,n,0,dp);
    }
};