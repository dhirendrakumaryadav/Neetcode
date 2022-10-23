class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         vector<int>arr(nums.size(),-1);
        vector<int>ans(2);
        for(auto x:nums){
            if(arr[x-1]==-1){
                arr[x-1]=0;
            }
            else{
                ans[0]=x;
            }
        }
      for(int i=0;i<arr.size();i++){
          if(arr[i]==-1){
              ans[1]=i+1;
              break;
          }
      }
        return ans;
    }
};