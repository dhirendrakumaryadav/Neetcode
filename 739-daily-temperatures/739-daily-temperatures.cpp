class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>s;
       vector<int>a(t.size());
        for(int i=0;i<t.size();i++){
            int c=i;
            int ct=t[i];
            while(!s.empty()&&s.top().second<ct){
                int p=s.top().first;
                int pt=s.top().second;
                s.pop();
                int cr=c-p;
                a[p]=cr;
            }
            s.push({c,ct});
        }
        return a;
    }
};