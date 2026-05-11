class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int> ans;
        backtrack(nums,0,0,ans);
        sort(ans.rbegin(),ans.rend());
        int mx=ans[0];
        int cnt=0;
        for(int i=0;i<ans.size();++i){
            if(ans[i]==mx) cnt++;
            else break;

        }
        return cnt;
        

        
    }
    void backtrack(vector<int> & nums,int val, int ind,vector<int> & ans){
        if(ind-1==nums.size()){
            ans.push_back(val);
            return ;

        }

        for(int i=ind;i<nums.size();++i){
            int tmp=val;
            val=val|nums[i];
            ans.push_back(val);
            //cout<<val<<endl;
            backtrack(nums,val,i+1,ans);
            val=tmp;



        }
        return;

    }
   
};