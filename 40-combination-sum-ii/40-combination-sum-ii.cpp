class Solution {
public:
    void find(int i,int t,vector<int>&c,vector<vector<int>>&a,vector<int>&d){
   
            if(t==0){a.push_back(d);
            return;}
        
      for(int j=i;j<c.size();j++){
          if(j>i&&c[j-1]==c[j])continue;
          if(t<c[j])break;
          d.push_back(c[j]);
          find(j+1,t-c[j],c,a,d);
          d.pop_back();
      }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>a;
        vector<int>d;
        find(0,target,candidates,a,d);
        return a;
        
    }
};