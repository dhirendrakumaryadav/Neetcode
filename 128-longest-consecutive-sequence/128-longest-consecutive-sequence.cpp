class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int r=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int c=1;
                while(s.find(nums[i]+c)!=s.end()){
                    c++;
                }
                r=max(r,c);
            }
        }
        return r;
    }
};