class Solution {
public:
    int possibleStringCount(string word) {
        int ans=0;
        int size=word.size();
        char ch=word[0];
        int prevind=0;
        int i;
        for( i=1;i<size;++i){
            if(word[i]!=ch){
                if(i-prevind>1){
                    ans+=(i-prevind-1);
                    //cout<<ch<<" "<<word[i]<<" "<<ans<<endl;

                }
                prevind=i;
                ch=word[i];
                

            }
        }
        ans+=(i-prevind);
        return ans;
        
    }
};