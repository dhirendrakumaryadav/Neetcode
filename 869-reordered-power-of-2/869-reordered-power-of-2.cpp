class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
         vector<string>st;
        for(int i=0;i<=30;i++){
            int p=pow(2,i);
            st.push_back(to_string(p));
        }
        for(int i=0;i<=30;i++){
            sort(st[i].begin(),st[i].end());
        }
        for(int i=0;i<=30;i++){
            if(st[i]==s)return true;
        }
        return false;
    }
};