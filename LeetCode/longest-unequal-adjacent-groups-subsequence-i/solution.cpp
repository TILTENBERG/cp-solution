class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans1,ans2;
        int prev=groups[0];
        ans1.push_back(words[0]);
        int ind=0;
        for( int i=1;i<groups.size();++i){
            if(groups[i]!=prev ){
                ans1.push_back(words[i]);
                prev=groups[i];
                ind=(ind==0) ? i:ind;
            }
        }
        ans2.push_back(words[ind]);
        prev=groups[ind];
        for(int i=ind+1;i<groups.size();++i){
            if(groups[i]!=prev){
                ans2.push_back(words[i]);
                prev=groups[i];
            }

        }
        return  (ans1.size()>ans2.size())? ans1: ans2;

        
    }
};