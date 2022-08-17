class Solution {
public:
    void find(int i,int t, vector<int>&c, vector<vector<int>> &a, vector<int> &d){
        
        if(i==c.size()){
            if(t==0)a.push_back(d);
            
            return;
        }
        if(t>=c[i]){
            d.push_back(c[i]);
            find(i,t-c[i],c,a,d);
            d.pop_back();
        }
        find(i+1,t,c,a,d);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        find(0,target,candidates,ans,ds);
        return ans;
    }
};