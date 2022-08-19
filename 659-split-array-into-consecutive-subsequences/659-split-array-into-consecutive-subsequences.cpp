class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>m,tail;
        for(auto i:nums)m[i]++;
        for(auto i:nums){
            if(m[i]==0)continue;
            m[i]--;
            if(tail[i-1]>0){
                tail[i-1]--;
                tail[i]++;
            }
            else if(m[i+1]&&m[i+2]){
                m[i+1]--;
                m[i+2]--;
                tail[i+2]++;
            }
            else return false;
        }
        return true;
        
    }
};