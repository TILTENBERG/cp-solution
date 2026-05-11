class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        vector<vector<int>> vct;
        vct.push_back({grid[0][0]});
        if(grid[0][0]>k) return 0;
        int ans=1;
        for(int i=1;i<grid.size();++i){
            vct.push_back({vct[i-1][0]+grid[i][0]});
            if(k>=vct[i][0]) ans++;
            
        }
        for(int i=1;i<grid[0].size();++i){
            vct[0].push_back(vct[0][i-1]+grid[0][i]);
            if(k>=vct[0][i]) ans++;
        }
        for(int i=1;i<grid.size();++i){
            for(int j=1;j<grid[0].size();++j){
                vct[i].push_back(vct[i][j-1]+vct[i-1][j]-vct[i-1][j-1]+grid[i][j]);
                if(k>=vct[i][j]) ans++;

            }
        }
        /*for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                cout<<setw(2)<<vct[i][j]<<" ";

            }
            cout<<endl;
        }
        */
        return ans;
        
    }
};