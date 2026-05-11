class Solution {
public:
    string pushDominoes(string dominoes) {
        vector<int> vct(dominoes.size(),0);
        string ans;
        int n=dominoes.size();
        int f=0;
        for(int i=0;i<n;++i){
            if(dominoes[i]=='R') f=n;
            else if(dominoes[i]=='L') f=0;
            else f=max(f-1,0);
            vct[i]+=f;

        }
        f=0;
        for(int i=n-1;i>=0;--i){
            if(dominoes[i]=='L') f=n;
            else if(dominoes[i]=='R') f=0;
            else f=max(f-1,0);
            vct[i]-=f;

        }
        
        for(int i=0;i<n;++i){
            ans+=(vct[i]>0 ? 'R' : vct[i]<0 ? 'L' : '.');

        }
        return ans;
        

        
    }
};