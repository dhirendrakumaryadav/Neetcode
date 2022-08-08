class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
     
         int i=0;
        int j=nums[0].size()-1;
        int n=nums.size();
        int m=nums[0].size();
    
        while(i<n&&j>=0&&i>=0&&j<m){
            if(nums[i][j]==target)return true;
            else if(nums[i][j]<target)i++;
            else j--;
        }
     return false;
    }
};