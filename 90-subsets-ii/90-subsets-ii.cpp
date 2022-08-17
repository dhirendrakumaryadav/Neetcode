class Solution {
public:
    void find(int i,vector<int>&d,vector<vector<int>>&ans,vector<int>&nums){
        
            ans.push_back(d);
     
        
        for(int j=i;j<nums.size();j++){
            if(i!=j&&nums[j]==nums[j-1])continue;
            d.push_back(nums[j]);
            find(j+1,d,ans,nums);
            d.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>d;
        find(0,d,ans,nums);
        return ans;
    }
};