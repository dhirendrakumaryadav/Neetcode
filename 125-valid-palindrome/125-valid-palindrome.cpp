class Solution {
public:
    bool isPalindrome(string s) {
       int k=0;
        for(int i=0;i<s.size();i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                s[k]=tolower(s[i]);
                k++;
            }
            
            
        }
       string q=s.substr(0,k);
        string w;
        w=q;
        reverse(w.begin(),w.end());
        if(q==w)return true;
        return false;
    }
};