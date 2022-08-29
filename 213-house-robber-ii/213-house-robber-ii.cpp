class Solution {
public:
    int get(vector<int>&temp,vector<int>&dp,int n){
        if(n<0)return 0;
        if(n==0)return temp[n];
        if(dp[n]!=-1)return dp[n];
        int pick=get(temp,dp,n-2)+temp[n];
        int npick=get(temp,dp,n-1);
        return dp[n]=max(pick,npick);
        
    }
    int rob(vector<int>& nums) {
       vector<int>temp1,temp2;
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int>dp1(n-1,-1);
         vector<int>dp2(n-1,-1);
        
     
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        return max(get(temp1,dp1,n-2),get(temp2,dp2,n-2));
    }
};