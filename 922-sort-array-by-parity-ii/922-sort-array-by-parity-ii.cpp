class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size()/2;
        vector<int>left(n);
        int l=0,r=0;
        vector<int>right(n);
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                left[l++]=nums[i];
            }
            else{
                right[r++]=nums[i];
            }
        }
        l=0;
        r=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=left[l++];
            }
            else{
                nums[i]=right[r++];
            }
        }
         return nums;
    }
   
};