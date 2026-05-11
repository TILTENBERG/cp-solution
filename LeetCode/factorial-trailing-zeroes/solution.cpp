class Solution {
public:
    int trailingZeroes(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        long long ans=0;
        long long sqr=5;
        while(n/sqr>0){
            ans=ans+n/sqr;
            sqr=sqr*5;

        }
        return ans;
        
    }
};