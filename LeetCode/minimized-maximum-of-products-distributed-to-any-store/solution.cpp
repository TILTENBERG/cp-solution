class Solution {
public:
    bool check(vector<int>& vct, int mid, int n) { 
        int sz = vct.size(); 
        int cnt=0;
        for(int i=0;i<sz;++i){
            int store=vct[i]/mid;
            int rem=vct[i]%mid;
            cnt+=store;
            if(rem!=0) cnt++;
        }
        return cnt<=n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int size = quantities.size();
        int maxim=INT_MIN;
        for(int i=0;i<size;++i){
            maxim=max(quantities[i],maxim);
        }
        if (size == n)
            return maxim;
        if (size == 1)
            return maxim;
        int l = 1;
        int r = maxim;
        int ans = INT_MAX;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int sum = 0;
            if(check(quantities,mid,n)){
                r=mid-1;
                ans=mid;
            }
            else l=mid+1;
           // cout << l << " " << r << " " << mid << " " << sum << endl;
           
        }
        return ans;
    }
};
/*
15
8 11 16 18 18 21 22 24 24 26 26 28


*/