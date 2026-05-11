class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans=0;
        long long power=0;
        for(int i=0,j=0;j<nums.size();++j){
            power+=nums[j];
            while(i<=j && power*(j-i+1)>=k){
                power-=nums[i];
                i++;
            }
            ans+=(j-i+1);
        }
        return ans;

        
    }
};