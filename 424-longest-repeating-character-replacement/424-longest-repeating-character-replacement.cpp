class Solution {
public:
    
        int characterReplacement(string s, int k) {

    
    

        int m[26]={0};
        int l=0;
        int r=0;
        int n=s.size();
        int mr=0;
        int res=0;
        while(r<n){
            m[s[r]-'A']++;
            mr=max(mr,m[s[r]-'A']);
            if(((r-l+1)-mr)<=k){
                res=max(res,(r-l+1));
                r++;
            }
            else{
                m[s[l]-'A']--;
                l++;
                r++;
            }
            
        }
        return res;
    }
};