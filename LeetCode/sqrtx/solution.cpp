class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        long long l=1;
        long long h=x/2;
        long long ans;
        while(h>=l){
            long long mid=(h+l)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                l=mid+1;
                ans=mid;
            }
            else{
                h=mid-1;

            }

        }
        return ans;
        
    }
};