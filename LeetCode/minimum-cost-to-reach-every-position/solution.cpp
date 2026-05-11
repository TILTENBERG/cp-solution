class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans;
        int min=INT_MAX;
        for(int i=0;i<cost.size();++i){
            if(cost[i]<min){
                min=cost[i];
                ans.push_back(min);
            }
            else{
                ans.push_back(min);
            }
        }
        return ans;
        
    }
};