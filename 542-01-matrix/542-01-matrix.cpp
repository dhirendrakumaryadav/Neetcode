class Solution {
public:

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> dirs{{0,-1},{-1,0},{0,1},{1,0}};
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                }
                else {
                    mat[i][j]=INT_MAX;
                }
            }
        }
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(auto r:dirs){
                int X=x+r[0];
                int Y=y+r[1];
                if (X < 0 || X>= m || Y < 0 || Y >= n || mat[X][Y] <= mat[x][y]+1) continue;
                
                mat[X][Y]=mat[x][y]+1;
                q.push({X,Y});
            }
        }
        return mat;
    }
};