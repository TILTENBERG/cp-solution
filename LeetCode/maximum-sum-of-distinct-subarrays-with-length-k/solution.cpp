class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        long long sum=0,maxSum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            mpp[nums[i]]++;
        }
        if(mpp.size()==k) maxSum=sum;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            mpp[nums[i-k]]--;
            mpp[nums[i]]++;
            if(mpp[nums[i-k]]==0){
                mpp.erase(nums[i-k]);
            }
            if(mpp.size()==k){
                maxSum=max(maxSum,sum);
            }
        }
        return maxSum;
    }
};