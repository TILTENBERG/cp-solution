class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minsum=0,maxsum=0;
        for(int i :nums){
            maxsum=max(0,maxsum+i);
            minsum=min(0,minsum+i);
        }
        return maxsum-minsum;
        
    }
};