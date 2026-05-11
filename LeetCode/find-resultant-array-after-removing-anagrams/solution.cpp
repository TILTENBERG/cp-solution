class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_set<string> st;
        vector<string> ans;
        string prev=words[0];
        ans.push_back(prev);
        sort(prev.begin(),prev.end());
        int size=words.size();
        for(int i=1;i<size;++i){
            string str=words[i];
            sort(str.begin(),str.end());
            if(str!=prev){
                ans.push_back(words[i]);
                prev=str;
            }            

            
        }
        return ans;
        
    }
};