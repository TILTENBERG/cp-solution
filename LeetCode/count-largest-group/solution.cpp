class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=1;i<=n;++i){
            int num=i;
            int sum=0;
            while(num){
                sum+=(num%10);
                num/=10;
            }
            ++mp[sum];
            ans=max(ans,mp[sum]);

           
        }
        int cnt=0;
        for(auto& [_,value]:mp){
            if(value==ans){
                ++cnt;
            }
        }
        return cnt;
        
    }
};