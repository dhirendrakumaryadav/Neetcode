class Solution {
public:
    string countAndSay(int n,string s="1") {
        if(n==1)return s;
        int i=0,j;
        string res="";
        int len=s.size();
        while(i<len){
            j=i;
            while(s[i]==s[j])i++;
            res+=to_string(i-j)+s[j];
        }
        return countAndSay(n-1,res);
    }
};