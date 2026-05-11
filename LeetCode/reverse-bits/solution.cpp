class Solution {
public:
    int reverseBits(int n) {
        int ind = 0;
        int ans = 0;
        for(int i=0;i<=31;++i){
            if(n&(1<<i)){
                ans += 1<<(31-i);
            }
        }
        return ans;

        
    }
};