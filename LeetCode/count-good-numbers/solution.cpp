class Solution {
public:
    int countGoodNumbers(long long n) {
        long long ans;
        if(n%2==1){
            long long num=n/2+1;
            ans=(5*fast_pow(20,num-1))%1000000007;
        }
        else{
            long long num=n/2;
            ans=fast_pow(20,num);
        }
        return ans;

        
        
    }
    long long fast_pow(long long n, long long exp){
        long long num=1;
        while(exp>0){
            if(exp&1){
                num=(num*n)%1000000007;
            }
            n=(n*n)%1000000007;
            exp>>=1;
        }
        return num;
    }
};