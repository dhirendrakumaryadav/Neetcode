class Solution {
public:
    void reverse(string &s,int st,int e){
        while(st<e){
            swap(s[st++],s[e--]);
        }
    }
    string reverseWords(string s) {
        int pi=-1;
        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i]==' '){
                reverse(s,pi+1,i-1);
                pi=i;
            }
            i++;
        }
        reverse(s,pi+1,i-1);
        return s;
    }
};