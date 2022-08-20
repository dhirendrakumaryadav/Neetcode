class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int>pq;
        int m=startFuel;
        int i=0;
        int c=0;
        while(m<target){
            while(i<stations.size()&&stations[i][0]<=m){
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.empty())return -1;
            m+=pq.top();
            pq.pop();
            c++;
        }
        return c;
    }
};