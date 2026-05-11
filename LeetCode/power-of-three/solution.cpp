class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        long long num=1;
        while(true){
            if(num<n) num*=3;
            else if(num==n) return true;
            else break;


        }
        return false;


        
    }
};