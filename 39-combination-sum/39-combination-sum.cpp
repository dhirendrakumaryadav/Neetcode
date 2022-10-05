class Solution {
public:
    void get(vector<int>& c,int target,int n,vector<vector<int>>&ans,vector<int>&res,int i){
        if(target==0){
            ans.push_back(res);
            return;
        }
        if(i==n)return;
        if(target>=c[i]){
        res.push_back(c[i]);
        get(c,target-c[i],n,ans,res,i);
        res.pop_back();
        }
        get(c,target,n,ans,res,i+1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>res;
        get(candidates,target,candidates.size(),ans,res,0);
        return ans;
    }
};