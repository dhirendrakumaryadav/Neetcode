class Solution {
public:
    int countBattleships(vector<vector<char>>& grid) {
      int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        { for(int j=0;j<m;j++)
            {
			// if the cell is 'X', call dfs function and increment the count by 1
            if(grid[i][j]=='X')
            {  dfs(grid,i,j);
                count++;
            }
        }
            
        }
        return count;
    }
    
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        int n=grid.size();
        int m=grid[0].size();

    // base case 
     // if i,j goes out of bound or it is not 'X' ,then return
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!='X')
            return ;
        
		// marking this cell as visited by assigning 'Y'
        grid[i][j]='Y';
		
		// calling dfs for only for down and right as left and upward cells are already visited and taken into consideration
        // given in question that there are no adjacent battleships
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        
    }
};