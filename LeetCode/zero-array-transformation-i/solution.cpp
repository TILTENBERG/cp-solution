class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> vct(nums.size()+1,0);
        for(auto & num:queries){
            int left=num[0];
            int right=num[1];
            vct[left]++;
            vct[right+1]-=1;
            
        }
        vector<int> v;
        int cnt=0;
        for(int &num:vct){
            cnt+=num;
            v.push_back(cnt);

        }
        for(int i=0;i<nums.size();++i){
            if(v[i]<nums[i]) return 0;
        }
        return 1;


        
    }
};