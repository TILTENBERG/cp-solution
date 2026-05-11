class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int size=nums.size();
        long long ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<size;++i){
            int tmp=nums[i]-i;
            int num=mp[tmp];
            ans+=i-num;
            mp[tmp]=num+1;
        }
        
        return ans;



        
    }
};