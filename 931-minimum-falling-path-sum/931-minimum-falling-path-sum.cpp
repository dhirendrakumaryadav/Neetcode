class Solution {
public:
    int get(vector<vector<int>>& matrix,int sr,int sc,int n,vector<vector<int>>&dp){
        if(sr==n-1&&(sc>=0)&&sc<n)return matrix[sr][sc];
      if((sc<0||sc>=n))return INT_MAX;
        if(sr==n-1&&(sc>=0)&&sc<n)return 0;
        if(dp[sr][sc]!=-1)return dp[sr][sc];
        return dp[sr][sc]=matrix[sr][sc]+min((get(matrix,sr+1,sc-1,n,dp)),min(get(matrix,sr+1,sc,n,dp),get(matrix,sr+1,sc+1,n,dp)));
        
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int res=INT_MAX;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<n;i++){
            int ans=get(matrix,0,i,n,dp);
            res=min(res,ans);
        }
        return res;
    }
};