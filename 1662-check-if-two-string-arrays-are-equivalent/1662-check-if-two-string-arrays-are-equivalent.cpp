class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string k="",r="";
        for(auto x:word1){
            k+=x;
        }
        for(auto x:word2){
            r+=x;
        }
        return k==r;
    }
};