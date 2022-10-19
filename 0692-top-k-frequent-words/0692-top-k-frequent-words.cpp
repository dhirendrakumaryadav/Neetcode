class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(auto x:words){
            m[x]++;
        }
   priority_queue<pair<int, string>, vector<pair<int, string>>, comp> pq;
        for(auto x:m){
            pq.push({x.second,x.first});
            if(pq.size()>k)pq.pop();
        }
        vector<string>res;
        while(!pq.empty()){
            res.insert(res.begin(),pq.top().second);
            pq.pop();
        }
        return res;
    }
    private:
    struct comp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
};