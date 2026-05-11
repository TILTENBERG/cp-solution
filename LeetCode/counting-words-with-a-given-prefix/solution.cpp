class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int size=pref.size();
        int ans=0;
        for(int i=0;i<words.size();++i){
            if(words[i].size()>=size){
                if(words[i].substr(0,size)==pref) ans++;
            }
        }
        return ans;
        
    }
};