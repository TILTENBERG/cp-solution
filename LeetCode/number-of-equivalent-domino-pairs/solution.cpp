class Solution {
public:
struct pair_hash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<pair<int, int>, int, pair_hash> mp;
        for(int i=0;i<dominoes.size();++i){
            int mn=min(dominoes[i][0],dominoes[i][1]);
            int mx=max(dominoes[i][0],dominoes[i][1]);
            mp[{mn,mx}]++;

        }
        int ans=0;
        for(auto it:mp){
            if(mp[it.first]>1){
                ans+=((mp[it.first]-1)*mp[it.first])/2;
            }
        }
        return ans;


        
    }
};