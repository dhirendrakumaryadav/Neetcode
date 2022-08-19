class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        string op="";
        vector<string>res;
        find(digits,res,op);
        return res;
    }
    void find(string digits,vector<string>&res,string op){
       vector<string> v={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(digits.size()==0){
            res.push_back(op);
            return;
        }
        string s=v[digits[0]-'0'];
        digits.erase(digits.begin()+0);
        for(int i=0;i<s.size();i++){
            find(digits,res,op+s[i]);
        }
    }
};