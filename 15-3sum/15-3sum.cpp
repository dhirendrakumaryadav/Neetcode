class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        if(nums[0]>0)return {};
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int j=nums.size()-1;
            int s=0;
            if(i!=0&&nums[i]==nums[i-1])continue;
          
            while(l<j){
                s=nums[i]+nums[l]+nums[j];
                if(s>0)j--;
                else if(s<0)l++;
                else{
                    v.push_back({nums[i],nums[l],nums[j]});
                    int left=nums[l];
                    int right=nums[j];
                    while(l<j&&nums[l]==left)l++;
                    while(l<j&&nums[j]==right)j--;
                }
            }
        }
        return v;
    }
};