class Solution {
public:
    int candy(vector<int>& ratings) {
        int size=ratings.size();
        int ans=0;
        vector<int>vct (size,1);
        for(int i=1;i<size;++i){
            if(ratings[i]>ratings[i-1]) vct[i]=vct[i-1]+1;

        }
        for(int i=size-2;i>=0;--i){
             if(ratings[i]>ratings[i+1] && vct[i]<=vct[i+1])vct[i]=vct[i+1]+1;
        }
        for(int i=0;i<size;++i){
            ans+=vct[i];
            //cout<<vct[i]<<" ";
        }
        return ans;
        
    }
};