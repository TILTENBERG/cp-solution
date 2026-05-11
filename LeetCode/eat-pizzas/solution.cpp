class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.rbegin(), pizzas.rend());
        long long ans = 0;
        int size = pizzas.size();
        int days = size / 4;
        int odddays = days / 2 + days % 2 ;
        int evendays = days / 2;
        for (int i = 0; odddays+evendays>0; ++i) {
            if(odddays>0){
                ans+=pizzas[i];
                odddays--;
            }
            else{
                ans+=pizzas[i+1];
                i++;
                evendays--;
            }
        }
        return ans;
    }
};