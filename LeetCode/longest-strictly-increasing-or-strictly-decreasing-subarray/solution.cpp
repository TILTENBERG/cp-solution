class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        vector<int> mx;
        mx.push_back(nums[0]);
        vector<int> mn;
        mn.push_back(nums[0]);
        int ans=1;
         for(int i=1;i<nums.size();++i){
            if(mx.back()<nums[i]){
                mx.push_back(nums[i]);
                int sz=mx.size();
                ans=max(ans,sz);

            }
            else{
                mx.clear();
                mx.push_back(nums[i]);
            }
            if(mn.back()>nums[i]){
                mn.push_back(nums[i]);
                int siz=mn.size();
            
                ans=max(ans,siz);
            }
            else{
                mn.clear();
                mn.push_back(nums[i]);
            }


        }
        return ans;


        
        
    }
};