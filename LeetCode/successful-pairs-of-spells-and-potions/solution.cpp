class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        vector<int> ans(spells.size());
        sort(potions.begin(), potions.end());
        /*for(auto num: potions){
            cout<<num<<" ";
        }
        */
        for (int i = 0; i < spells.size(); ++i) {
            long long target = (success % spells[i] == 0) ? success / spells[i]
                                                    : success / spells[i] + 1;
            int l = 0, r = potions.size() - 1;
            int mid;
            while (l <= r) {
                 mid = (r - l) / 2 + l;
               
                if (potions[mid] >= target) {
                    r = mid - 1;

                } else {
                    l = mid + 1;
                }
            }
           // cout<<l<<endl;
            ans[i]=potions.size()-l;
        }
        return ans;
    }
};