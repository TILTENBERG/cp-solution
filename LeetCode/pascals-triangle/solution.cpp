class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
         ans={{1},{1,1}};
        if(numRows==1) return  {{1}};
         for(int i=3;i<=numRows;++i){
            vector<int> vct(i,1);
            for(int j=1;j<i-1;++j){
                vct[j]=ans[i-2][j]+ans[i-2][j-1];
            }
            ans.push_back(vct);
         }
         return ans;
         
    }
};