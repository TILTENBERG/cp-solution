class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                  if(grid[i][j]==1){
                    ans=max(ans,dfs(grid,i,j));

                  }
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>>& vct, int row, int col) {
        int sum=1;
        int rows = vct.size();
        int cols = vct[0].size();
        if (row < 0 || col < 0 || row >= rows || col >= cols ||
            vct[row][col] == 0)
            return 0;
        vct[row][col]=0;
        sum+=dfs(vct,row+1,col);
        sum+=dfs(vct,row-1,col);
        sum+=dfs(vct,row,col+1);
        sum+=dfs(vct,row,col-1);
        return sum;
    }
};