class Solution {
public:
    int pivotInteger(int n) {
    
        // n(n+1)/2 - x(x+1)/2 + x  == x(x+1)/2  -->  x^2  = n(n+1) /2 

        int sum = (n * (n + 1)) / 2;
        int ans = sqrt(sum);
        if(ans*ans == sum) return ans;
        else return -1;
    }

};