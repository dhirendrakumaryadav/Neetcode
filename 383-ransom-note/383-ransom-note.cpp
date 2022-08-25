class Solution {
public:
    bool canConstruct(string ran, string mag) {
         map<int,int>m;
        for(int i=0;i<mag.size();i++){
            m[mag[i]-'0']++;;
        }
        for(int i=0;i<ran.size();i++){
               m[ran[i]-'0']--;
        }
        for(auto x:m){
            if(x.second<0)return false;
        }
        return true;
    }
};