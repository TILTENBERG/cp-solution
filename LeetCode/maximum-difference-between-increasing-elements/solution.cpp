class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=-1;

        for(int i=0;i<nums.size()-1;++i){
            int mn=nums[i];
            for(int j=i;j<nums.size();++j){
                if(nums[j]>mn) ans=max(ans,nums[j]-mn);

            }

        }
        return ans;
        
    }
};