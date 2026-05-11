class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
       
        int l=0;
        int r=nums.size()/3;
        for(int i=0;i<nums.size();i+=3){
            if(nums[i+2]-nums[i]>k){
                return {};
            }
            else 
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
            


        }
        return ans;
        
    }
};