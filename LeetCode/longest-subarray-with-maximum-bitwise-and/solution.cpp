class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx=0;
        for(int num:nums){
            if(num>mx) mx=num;
        } 
        int ans=0;
        int current_length=0;

        for(int i=0;i<nums.size();++i){
            if(nums[i]==mx) current_length++;
            else{
                 ans=max(ans,current_length);
                 current_length=0;

            }
        }
         ans=max(ans,current_length);
       
       
        return ans;
    }
    
};