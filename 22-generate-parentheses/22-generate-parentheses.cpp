class Solution {
public:
    vector<string>ans;
    void helper(int o,int e,string s,int n){
        if(s.length()==2*n){
            ans.push_back(s);
            return;
                           }
        if(o<n)helper(o+1,e,s+"(",n);
        if(e<o)helper(o,e+1,s+")",n);
    }
    
    vector<string> generateParenthesis(int n) {
        helper(0,0,"",n);
        return ans;
    }
};