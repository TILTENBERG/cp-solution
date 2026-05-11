class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();++i){
          for(int j=0;j<grid[0].size();++j){
            if(grid[i][j]=='1'){
                dfs(grid,i,j);
                ans++;

            }

          }
        }
        return ans;

        
    }
    void dfs(vector<vector<char>> & vct,int row,int col){
        int rows=vct.size();
        int cols=vct[0].size();
        if(row<0 || col<0 || row>=rows || col>=cols || vct[row][col]=='0') return ;
        vct[row][col]='0';
        dfs(vct,row+1,col);
        dfs(vct,row-1,col);
        dfs(vct,row,col+1);
        dfs(vct,row,col-1);

    }
};