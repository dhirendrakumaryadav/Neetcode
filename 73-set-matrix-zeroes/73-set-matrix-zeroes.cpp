class Solution {
public:
    void get(vector<vector<int>>& matrix,int i,int j,int m,int n,vector<vector<bool>>&v){
      
        for(int k=0;k<m;k++){
            if(matrix[k][j]!=0){matrix[k][j]=0;v[k][j]=true;}
        }
        for(int k=0;k<n;k++){
            if(matrix[i][k]!=0){matrix[i][k]=0;v[i][k]=true;}
        }
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<bool>>v(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 && v[i][j]==false){
                    get(matrix,i,j,m,n,v);
                    v[i][j]=true;
                }
            }
        }
   
    }
};