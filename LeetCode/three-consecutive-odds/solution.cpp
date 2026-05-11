class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int a=0;
        for(int& it:arr){
            if(it%2==1){
                a++;
            }
             else a=0;
            if(a==3){
                return true;
            }
       

        }
        return false;
        
    }
};