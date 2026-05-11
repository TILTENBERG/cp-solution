class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        vector<vector<char>> newbox(n,vector<char>(m));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                newbox[i][j]=boxGrid[m-1-j][i];
            }
        }
        for(int j=0;j<m;++j){
            int wall=n;
        for(int i=n-1;i>=0;--i){
            if(newbox[i][j]=='*' ) wall=i;
            else if(newbox[i][j]=='#'){
                wall--;
                swap(newbox[wall][j],newbox[i][j]);
            }         
        }
        }
        return newbox;

        
    }
};