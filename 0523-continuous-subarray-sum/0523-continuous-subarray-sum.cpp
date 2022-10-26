class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int mod=nums[0]%k;
        m[mod]=0;
        for(int i=1;i<nums.size();i++){
            mod=(mod+nums[i])%k;
            if(mod==0||m.find(mod)!=m.end()&&m[mod]!=i-1)return true;
            else if(m.find(mod)==m.end()) m[mod]=i;
        }
        return false;
    }
};