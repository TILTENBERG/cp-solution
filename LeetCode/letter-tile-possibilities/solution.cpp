class Solution {
public:
    int countL(int num,vector<int> & freq,int unique){
        if(num==1) return unique-count(freq.begin(),freq.end(),0);
        int ans=0;
        for(int i=0;i<unique;++i){
            if(freq[i]>0){
                freq[i]--;
                ans+=countL(num-1,freq,unique);
                freq[i]++;
            }
        }
        return ans;

    }
    int numTilePossibilities(string tiles) {
        int letters=0;
        vector<int> vct(26,0);
        for(char c:tiles){
            if(++vct[c-'A']==1){
                letters++;
            }
        }
        sort(vct.begin(),vct.end(),greater<int> ());
        vct.resize(letters);
        int ans=0;
        for(int j=1;j<=tiles.size();++j){
            ans+=countL(j,vct,letters);


        }
        return ans;
        

        
    }
    
};