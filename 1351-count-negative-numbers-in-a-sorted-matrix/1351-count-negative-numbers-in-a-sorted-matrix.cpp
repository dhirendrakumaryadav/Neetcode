class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int r=0;
        int c=n-1;
        int ans=0;
        while(r<m){
            while(c>=0&&grid[r][c]<0)c--;
            ans+=n-c-1;
            r++;
        }
        return ans;
        }
};