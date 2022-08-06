class Solution {
public:
    
        int characterReplacement(string s, int k) {
int n= s.size(),res=0;
int l=0,r=0,maxf=0,count[26]={0};

    while(r<n)
    {
        count[s[r]-'A']++;
        maxf = max(maxf,count[s[r]-'A']);
        
        if((r-l+1) - maxf <= k) //check for allowed change in sub string
        {
            res = max(res,(r-l+1));//store curr max of length of window size
            r++;
        }else{
            count[s[l]-'A']--;//decrement count of 1st letter
            l++; //move window
            r++;//here too
        }
    }
    
    return res;

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*int m[26]={0};
        int l=0;
        int r=0;
        int n=s.size();
        int mr=0;
        int res=0;
        while(r<n){
            m[s[r]-'A']++;
            int mr=max(mr,m[s[r]-'A']);
            if(((r-l+1)-mr)<=k){
                res=max(res,r-l+1);
                r++;
            }
            else{
                m[s[l]-'A']--;
                l++;
                r++;
            }
            
        }
        return res;*/
    }
};