class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> rank(n,1);
        for(auto & it:edges){
            rank[it[1]]=0;
        }
        int champ=-1;
        for(int i=0;i<n;++i){
            if(rank[i]){
                if(champ!=-1){
                    return -1;
                }
                champ=i;

            }
        }
        return champ;
        
    }
};