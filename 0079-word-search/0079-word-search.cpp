class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if (dfs(i,j,board,word))
                return true;
            }
        }
        return false;
    }
    bool dfs(int i,int j,vector<vector<char>>& board,string &word){
        if(word.size()==0)return true;
        if(i>=board.size()||j>=board[0].size()||i<0||j<0||board[i][j]!=word[0])return false;
        char c=board[i][j];
        board[i][j]='*';
        string s=word.substr(1);
        bool res=dfs(i+1,j,board,s)||dfs(i,j+1,board,s)||dfs(i-1,j,board,s)||dfs(i,j-1,board,s);
        board[i][j]=c;
        return res;
    }
};