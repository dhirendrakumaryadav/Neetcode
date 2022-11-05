struct Node{
    Node* links[26] = {};
    bool isWord = false;

    bool isContainsKey(char ch){
        return links[ch - 'a'] != NULL;
    }

    void setKey(char ch){
        links[ch - 'a'] = new Node;
    }

    Node* getKey(char ch){
        return links[ch - 'a'];
    }
};

class Trie{
    Node* root;
    int n, m;
    int dir[5] = {0, 1, 0, -1, 0};
public:
    vector<string> words;
    Trie(){
        root = new Node;
    }

    void insertWord(string &word){
        Node* node = root;
        for(char &ch: word){
            if(!node->isContainsKey(ch)) node->setKey(ch);
            node = node->getKey(ch);
        }
        node->isWord = true;
    }

    void dfs(vector<vector<char>> &board, int i, int j, Node* node, string &word){
		// If we found any valid word, we will put it into vector
        if(node->isWord){
            words.emplace_back(word);
            node->isWord = false; // Avoid Duplication : )
        }

		// Backtracking
        board[i][j] = '.';

		// 4-Directional DFS
        for(int k = 0; k < 4; k++){
            int newI = i + dir[k], newJ = j + dir[k+1];
            if(newI >= 0 && newI < n && newJ >= 0 && newJ < m){
                char ch = board[newI][newJ];
                if(ch != '.' && node->isContainsKey(ch)){
					// Backtracking
                    word.push_back(ch);
                    dfs(board, newI, newJ, node->getKey(board[newI][newJ]), word);
                    word.pop_back();
                }
            }
        }

        board[i][j] = word.back();
    }

    vector<string> getAllWords(vector<vector<char>> &board){
        n = board.size(), m = board[0].size();

        Node* node = root;
        string word = "";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                char ch = board[i][j];
                if(node->isContainsKey(ch)){
                    word.push_back(ch); // backtracking stuff  
                    dfs(board, i, j, node->getKey(ch), word);
                    word.pop_back(); 
                }
            }
        }
        return words;
    }
};

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie t;
        
        for(auto &word: words) t.insertWord(word);

        return t.getAllWords(board);
    }
};