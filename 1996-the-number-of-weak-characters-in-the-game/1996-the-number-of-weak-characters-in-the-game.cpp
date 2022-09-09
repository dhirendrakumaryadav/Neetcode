class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& nums) { 
      int n=nums.size();
      sort(nums.begin(),nums.end());
        int a=nums[n-1][0];
        int b=nums[n-1][1];
        int l=nums[n-1][1];
        int c=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i][0]<nums[i+1][0]){
            b=l;
            l=max(nums[i][1],l);
            }
            if(nums[i][0]<a&&nums[i][1]<b)c++;
        }
        return c;

    }
    };   
        
        
  