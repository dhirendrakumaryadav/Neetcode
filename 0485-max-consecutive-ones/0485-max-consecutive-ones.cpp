class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c1=0;
        int c2=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c1++;
               res=max(res,c1);
                c2=0;
            }
            else{
                c2++;
                c1=0;
            }
            
        }
        return res;
    }
};