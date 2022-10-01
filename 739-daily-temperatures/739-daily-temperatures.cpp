class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>s;
        vector<int>ans(t.size());
        for(int i=0;i<t.size();i++){
            int c=i;
            int ct=t[i];
            while(!s.empty()&&s.top().second<ct){
                int p=s.top().first;
                int t=s.top().second;
                s.pop();
                int q=c-p;
                ans[p]=q;
            }
            s.push({c,ct});
            
        }
        return ans;
    }
};