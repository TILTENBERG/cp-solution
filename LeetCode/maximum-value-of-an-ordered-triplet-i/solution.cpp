class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0,imax=0,dmax=0;
        for(int i=0;i<nums.size();++i){
            ans=max(ans,dmax*nums[i]);
            dmax=max(dmax,imax-nums[i]);
            imax=max(imax,static_cast<long long>(nums[i]));
        }
        return ans;

        
    }
};