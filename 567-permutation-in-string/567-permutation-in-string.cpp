class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>v(26,0);
        if(s1.size()>s2.size())return false;
        for(int i=0;i<s1.size();i++){
            v[s1[i]-'a']++;
            v[s2[i]-'a']--;
            
          
            }
          if(per(v))return true;
          for(int i=s1.size();i<s2.size();i++){
                v[s2[i]-'a']--;
                v[s2[i-s1.size()]-'a']++;
                if(per(v))return true;
        }
        return false;
    }
   
    bool per( vector<int>&v){
        for(int i=0;i<26;i++){
            if(v[i]!=0)return false;
        }
        return true;
    }
};