class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int a=0;
        for(int i=0;i<n/2;i++){
          if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')
              a++;
        
        }
        int b=0;
        for(int i=n/2;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')b++;
        }
        if(a==b)return true;
        else return false;
    }
};