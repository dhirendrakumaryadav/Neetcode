class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(auto c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                v.push_back(c);
            }
        }
        reverse(v.begin(),v.end());
        int k=0;
       for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=v[k++];
            }
       }
        return s;
    }
};