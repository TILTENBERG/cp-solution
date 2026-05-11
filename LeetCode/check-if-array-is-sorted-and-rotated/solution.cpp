class Solution {
public:
    bool check(vector<int>& nums) {
        if (is_sorted(nums.begin(), nums.end()))
            return true;

        for(int i=1;i<nums.size();++i){
            if(nums[i-1]>nums[i]){
                if(is_sorted(nums.begin()+i,nums.end()) && nums.back()<=nums[0]){
                    return true;
                }
                else{
                    return false;
                }
                
            
                
            }
        }

        return false;
    }
};