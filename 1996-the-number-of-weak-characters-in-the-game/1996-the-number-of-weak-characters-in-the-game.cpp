class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0,a=nums[size-1][0],b=nums[size-1][1],lmax=nums[size-1][1];;
        for(int i=size-2;i>=0;i--)
        {
            if(nums[i][0]<nums[i+1][0]) 
            {
                b=lmax;
               lmax=max(lmax,nums[i][1]); 
            }
            if(nums[i][0]<a && nums[i][1]<b)
              ans++;
        }
        return ans;
    }
    };   
        
        
  