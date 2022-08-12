class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j;
        i=0;
        j=0;
        while(i<nums.size()){
            if(nums[i]==val){
                i++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return j;
    }
};