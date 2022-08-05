class Solution {
public:
    bool check(vector<vector<char>>& board,int i,int j,int val){
        for(int k=0;k<board.size();k++){
            if(j!=k&&board[i][k]==val)return false;
            if(i!=k&&board[k][j]==val)return false;
           int r=3*(i/3)+k/3;
            int c=3*(j/3)+k%3;
            if(r!=i&&c!=j&&board[r][c]==val)return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    if(check(board,i,j,board[i][j])==false)return false;
                }
            }
        }
        return true;
    }
};