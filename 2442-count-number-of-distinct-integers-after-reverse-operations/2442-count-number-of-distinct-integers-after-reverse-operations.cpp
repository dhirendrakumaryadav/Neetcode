class Solution {
public:
    int rev(int nums){
        int rev=0;
        while(nums!=0){
            int rem=nums%10;
              rev=rev*10+rem;
            nums=nums/10;
         
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int>m;
        int a;
        int c=0;
        for(int i=0;i<nums.size();i++){
            a=rev(nums[i]);
            if(m[nums[i]]==0){
                c++;
                m[nums[i]]=1;
            }
            if(m[a]==0){
                c++;
                m[a]=1;
            }
           
        }
        return c;
    }
};