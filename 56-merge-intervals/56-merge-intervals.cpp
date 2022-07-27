class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>r;
        if(inter.size()==0)return r;
        sort(inter.begin(),inter.end());
        r.push_back(inter[0]);
        int j=0;
        for(int i=1;i<inter.size();i++){
            if(r[j][1]>=inter[i][0]){
                r[j][1]=max(r[j][1],inter[i][1]);
            }
            else{
                j++;
                r.push_back(inter[i]);
            }
        }
        return r;
    }
};