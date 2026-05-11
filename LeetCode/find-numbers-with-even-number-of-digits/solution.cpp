class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        // 1 2 3 4 5 
        for(int i=0;i<n;++i){
            if(nums[i]>9 && nums[i]<100) ans++;
            if(nums[i]>999 && nums[i]<10000) ans++;
            if(nums[i]==100000) ans++;

        }
        return ans;
        
    }
};