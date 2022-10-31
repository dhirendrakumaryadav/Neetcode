class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int j=0;
        int k;
        for(int i=0;i<n;i++){
           k=i;
            while(k<n-1&&j<m-1){
               if(matrix[k][j]!=matrix[k+1][j+1])return false;
               k++;
               j++;
           } 
            j=0;
        }
        j=0;
         for(int i=1;i<m;i++){
           k=i;
        while(k<m-1&&j<n-1){
               if(matrix[j][k]!=matrix[j+1][k+1])return false;
               k++;
               j++;
           } 
             j=0;
        }
        return true;
        
    }
};