class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int sub = 0;
        long long ans = 0;
        for(int i=n-1; i>=0 && k; i--){
            k--;
            int x = arr[i]-sub++;
            if(x>0) ans += x;
            else break;
        }
        return ans;
    }
};