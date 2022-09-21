class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        vector<int>ans;
        for(auto x:nums){
            if(x%2==0){
            sum+=x;
            }
        }
        for(auto q:queries){
            int n=q[0];
            int i=q[1];
            if(nums[i]%2==0)sum-=nums[i];
            nums[i]=nums[i]+n;
            if(nums[i]%2==0){
                sum+=nums[i];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};