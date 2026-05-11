class Solution {
public:
    long long lower_bound(vector<int> & nums,int low,int high,int target){
        while(low<=high){
            int mid=low+(high-low)/2;

            if(target<=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        int size = nums.size() -1;
        for (int i = 0; i < size; ++i) {
            int min = nums[i] + nums[i + 1];
            int max = nums[i] + nums[size];
            if (lower > max || upper < min)
                continue;
            else {
                int l=lower_bound(nums,i+1,size,lower-nums[i]);
                int r=lower_bound(nums,i+1,size,upper-nums[i]+1);
                ans+=(r-l);      
            }
        }
        return ans;
    }
};
/*
0 1 4 4 5 7
1 7
5 8

1 2 5 7 9
3 10
7 11
[7,5,6,9,4,2,10,3] 10 13
2 3 4 5 6 7 9 10

5 12




l=3 u=6;


*/
