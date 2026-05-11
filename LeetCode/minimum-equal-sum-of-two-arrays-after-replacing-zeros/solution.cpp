class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int cnt1 = 0, cnt2 = 0;
        long long sum1 = 0, sum2 = 0;
        for (int& num : nums1) {
            sum1 += num;
            cnt1 += (num == 0) ? 1 : 0;
        }
        for (int& num : nums2) {
            sum2 += num;
            cnt2 += (num == 0) ? 1 : 0;
        }
        sum1+=cnt1;
        sum2+=cnt2;
        if(sum1==sum2) return sum1;
        if(min(sum1,sum2)==sum1){
            return (cnt1!=0)? sum2:-1;
        }
        else return (cnt2!=0) ? sum1:-1;
       
        
        
    }
};