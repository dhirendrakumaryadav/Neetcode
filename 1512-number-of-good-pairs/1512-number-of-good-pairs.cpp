class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
           map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=0;
        for(auto x:m){
            int n=x.second;
            if(n>1)
            k+=(n*(n-1))/2;
        }   
        return k;
    }
};