class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        long long temp=0;
        for(int i=0;i<nums.size();++i){
            sum+=nums[i];
        }
        int ans=0;
        for(int i=0;i<nums.size()-1;++i){
            temp+=nums[i];
            sum-=nums[i];
            if(temp>=sum) ans++;
        }
        return ans;
        
    }
};