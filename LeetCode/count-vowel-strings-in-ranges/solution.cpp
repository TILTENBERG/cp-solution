class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_map<int,int> mp;
        mp[-1]=0;
        vector<int> ans;
        int sum=0;
        for(int i=0;i<words.size();++i){
            string s=words[i];
            if(s[0]=='a' || s[0]=='e' ||s[0]=='i' ||s[0]=='o' ||s[0]=='u'){
                if(s[s.size()-1]=='a' || s[s.size()-1]=='e' ||s[s.size()-1]=='i' ||s[s.size()-1]=='o' ||s[s.size()-1]=='u'){
                    sum++;
                }
            }
            mp[i]=sum;
        }
        for(auto & it:queries){
            ans.push_back(mp[it[1]]-mp[it[0]-1]);
            
            
        }
        return ans;
        
    }
};