class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st;
        int size = nums.size();
        for(int i=0;i<size;++i){
            st.insert(nums[i]);
        }
        vector<int> ans;
        for(int i=1;i<=size;++i){
            if(!st.count(i)) ans.push_back(i);
        }
        return ans;
        
    }
};