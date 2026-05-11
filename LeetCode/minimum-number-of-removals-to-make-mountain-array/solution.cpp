class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> inc;
        vector<int> incsum;
        for(int i=0;i<nums.size();++i){
            auto it=lower_bound(inc.begin(),inc.end(),nums[i]);
            if(it==inc.end()){
                inc.push_back(nums[i]);
            }
            else{
                *it=nums[i];
            }
            incsum.push_back(inc.size());
        }
        vector<int> dec;
        vector<int> decsum;
        for(int i=nums.size()-1;i>=0;--i){
            auto it=lower_bound(dec.begin(),dec.end(),nums[i]);
            if(it==dec.end()){
                dec.push_back(nums[i]);
            }
            else{
                *it=nums[i];
            }
            decsum.push_back(dec.size());
        }
        reverse(decsum.begin(),decsum.end());
        int max=INT_MIN;
        for(int i=0;i<nums.size();++i){
            if(incsum[i]!=1 && decsum[i]!=1){
                if(decsum[i]+incsum[i]-1>max) max=decsum[i]+incsum[i]-1;


            }

        }
        return nums.size()-max;

        
    }
};