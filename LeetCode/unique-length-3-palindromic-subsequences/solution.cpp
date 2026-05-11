class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans=0;
        unordered_set<char> start;
        unordered_map<char,pair<int,int>> mp;
        for(int i=0;i<s.size();++i){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]={i,i};
            }
            else{
                mp[s[i]].second=i;
            }
        }
        for(int i=0;i<s.size();++i){
            if(start.find(s[i])==start.end()){
                ans+=cnt(s,mp,s[i]);
                start.insert(s[i]);
            }
        }
        
        
        return ans;
        
    }
    int cnt(string & str,unordered_map<char,pair<int,int>> & mp,char & c ){
        int sum=0;
        int start=mp[c].first;
        int last=mp[c].second;
        unordered_set<char> st;
        for(int i=start+1;i<last;++i){
            if(st.find(str[i])==st.end()){
                st.insert(str[i]);
                sum++;

            }
        }
        return sum;

    }
};