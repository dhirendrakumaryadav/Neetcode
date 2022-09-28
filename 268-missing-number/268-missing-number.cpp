class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n+1,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==0)n=i;
        }
        return n;
    }
};