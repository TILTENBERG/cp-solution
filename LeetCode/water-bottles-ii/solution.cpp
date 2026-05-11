class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty=numBottles;
        int ans=empty;
        while(empty>=numExchange){
            empty-=(numExchange++);
            ans++;
            empty++;

        }
        return ans;
        
    }
};