class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> vct;
        for(int num:nums){
            mp[num]++;
            if(mp[num]==2) vct.push_back(num);
        }
        return vct;
       

        
    }
};