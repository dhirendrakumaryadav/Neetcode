class Solution {
public:
    int maxLength(vector<string>& arr) {
        int l=0;
        get(arr,l,"",0);
        return l;
    }
    void get(vector<string>& arr,int &l,string s,int i){
        if(!check(s))return;
        if(s.size()>l)l=s.size();
        for(int k=i;k<arr.size();k++){
           get(arr,l,s+arr[k],k+1); 
        }   
    }
    bool check(string s){
        unordered_set<char>hi;
        for(auto words:s){
            if(hi.find(words)!=hi.end()){
                return false;
            }
            hi.insert(words);
        }
        return true;
    }
};