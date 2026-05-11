class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans=INT_MAX;
        for(int i=0;i<=blocks.size()-k;++i){
            string s=blocks.substr(i,k);
            ans=min(ans,cnt(s));


        }
        return ans;
        
    }
    int cnt(string &str){
        int num=str.size();
        int ans=0;
        
        for(int i=0;i<num;++i){
            if(str[i]=='W')ans++;
        }
        return ans;


    }
};