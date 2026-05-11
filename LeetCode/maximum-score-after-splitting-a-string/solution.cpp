class Solution {
public:
    int maxScore(string s) {
        int sum0=0,sum1=0;
        int ans=0;
        for(auto & ch:s){
            if(ch=='1') sum1++;

        }
        for(int i=0;i<s.size()-1;++i){
            if(s[i]=='0')sum0++;
            else sum1--;
            ans=max(ans,sum0+sum1);

        }
        return ans;
        
    }
};