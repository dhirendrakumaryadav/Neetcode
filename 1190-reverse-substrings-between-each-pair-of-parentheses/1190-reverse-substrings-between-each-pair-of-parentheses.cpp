class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        vector<string>v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                v.push_back(ans);
                ans="";
            }
            else if(s[i]==')'){
                reverse(ans.begin(),ans.end());
                ans=v.back()+ans;
                v.pop_back();
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};