class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>v;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
            
        }
        for(auto w:m){
            v.push_back(w.second);
        }
        return v;
    }
};