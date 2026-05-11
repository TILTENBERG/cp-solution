class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num=n/m;
        int num2=m*(num*(num+1))/2;
        int sum=(n*(n+1))/2;
         return sum-2*num2;

        
    }
};