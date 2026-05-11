class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size();
        int max=0;
        int cnt=0;
        for(int i=0;i<n;++i){
            if(nums[i]>max) max=nums[i];
        }
        for(int i=0,j=0;j<n;++j){
            if(nums[j]==max) cnt++;
            while(i<=j && cnt>=k){
                ans+=(n-j);
                if(nums[i]==max) cnt--;
                i++;

            }


        }
        return ans;

        
    }
};