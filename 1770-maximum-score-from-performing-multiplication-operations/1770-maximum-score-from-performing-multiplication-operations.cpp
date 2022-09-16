class Solution {
public:
    int get(int l,int r,int i,vector<int>& nums,vector<int>& multi,vector<vector<int>>&dp){
         if(i==multi.size()){
             return 0;
         }
        if(dp[i][l]!=INT_MIN)return dp[i][l];
        int left=nums[l]*multi[i]+get(l+1,r,i+1,nums,multi,dp);
        int right=nums[r]*multi[i]+get(l,r-1,i+1,nums,multi,dp);
         return dp[i][l]=max(left,right);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int l=0;
        int r=nums.size()-1;
        int n=nums.size();
        int m=multipliers.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,INT_MIN));
        return get(l,r,0,nums,multipliers,dp);
    }
};