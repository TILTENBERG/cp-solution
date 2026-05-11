class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int empty=ans;
        while(empty>=numExchange){
            ans+=empty/numExchange;
            empty=empty/numExchange+empty%numExchange;


            
            

        }
        return ans;
        
    }
};