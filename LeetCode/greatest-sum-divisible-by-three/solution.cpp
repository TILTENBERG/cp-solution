class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {

        int size = nums.size();
        vector<int> vct = {0,INT_MIN,INT_MIN};
        for(int &num:nums){
            vector<int> prev = vct;
            for(int i=0;i<3;++i){
                prev[(i+num)%3] = max(prev[(i+num)%3],vct[i]+num);
            }
            vct=move(prev);
        }
       

       
        return vct[0];
    }
};