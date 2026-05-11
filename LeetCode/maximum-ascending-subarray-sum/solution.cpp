class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx=nums[0];
        int tmp=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();++i){
            if(tmp<nums[i]){
                tmp=nums[i];
                mx+=nums[i];
                ans=max(ans,mx);
                

            }
            else{
                mx=nums[i];
                tmp=nums[i];
                ans=max(ans,mx);
            }

        }
        return ans;
        
    }
};