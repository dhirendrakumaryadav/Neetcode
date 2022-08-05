class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int r=t.size();
        vector<int>v(256,0);
        if(n!=r)return false;
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }    
        for(int i=0;i<n;i++){
            if(v[s[i]-'a']>0)return false;
        }
        return true;

    }
};