class Solution {
public:
    int map_sort(unordered_map<int,int> &mp , int x){
        vector<pair<int,int>> vct;
        for(auto & num:mp){
            vct.push_back({num.second,num.first});
        }
        int size=vct.size();
        sort(vct.rbegin(),vct.rend());
        int ans=0;
        for(int i=0;i<min(x,size);++i){
            ans+=(vct[i].first*vct[i].second);
            //cout<<vct[i].second<<" "<<vct[i].first<<endl;
        }
        return ans;


    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int size=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<k;++i){
            mp[nums[i]]++;
        }
        ans.push_back(map_sort(mp,x));
        for(int j=k;j<size;++j){
            mp[nums[j]]++;
            mp[nums[j-k]]--;
            ans.push_back(map_sort(mp,x));
        }
        return ans; 


        
    }
};