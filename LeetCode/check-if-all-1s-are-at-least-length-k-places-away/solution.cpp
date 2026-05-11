class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prevInd=0;
        int size = nums.size();
        for(int i=0;i<size;++i){
            if(nums[i]==1){
                prevInd = i;
                break;
            }
        }
        for(int i=prevInd+1;i<size;++i){
            if(nums[i]==1){
                if(i-prevInd-1 < k) return false;
                //cout<<prevInd<<' '<<i<<'\n';
                prevInd = i;
            }
        }
        return true;
        
    }
};