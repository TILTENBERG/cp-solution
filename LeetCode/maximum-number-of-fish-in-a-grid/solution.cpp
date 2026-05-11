class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int ans=0;
    for(int i=0;i<grid.size();++i){
        for(int j=0;j<grid[0].size();++j){
            if(grid[i][j]!=0){
                ans=max(ans,dfs(grid,i,j));

            }
        }
    }
    return ans;
        
    }
    int dfs(vector<vector<int>> & fish, int  row, int  col){
        int rows=fish.size();
        int cols=fish[0].size();
        if(row<0 || col<0 || row>=rows || col>=cols || fish[row][col]==0) return 0;
        int cur=fish[row][col];
        fish[row][col]=0;
        cur+=dfs(fish,row-1,col);
        cur+=dfs(fish,row+1,col);
        cur+=dfs(fish,row,col+1);
        cur+=dfs(fish,row,col-1);
        return cur;


    }
};