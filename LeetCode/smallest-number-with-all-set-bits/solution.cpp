class Solution {
public:
    int smallestNumber(int n) {
        int num_bits=floor(log2(n))+1;
        int mask=(1<<num_bits)-1;
        int m = (~n)&mask;
        //~n = -(n+1)
        // 101 010 110
        //cout<<m;
        int ans=m^n;
        return ans;
        
    }
};