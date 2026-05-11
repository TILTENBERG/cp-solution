class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int maxind=-1,minind=-1;
        int start=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<minK || nums[i]>maxK){
                start=i+1;
                minind=-1;
                maxind=-1;

            }
            if(nums[i]==minK){
                minind=i;
            }
            if(nums[i]==maxK){
                maxind=i;
            }
            ans+=max(0,min(minind,maxind)-start+1);
        }
        return ans;



        
    }
};