class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int size=s.size();
        string str;
        for(char c:s){
            str+=c;
            if(str.size()==k){
                ans.push_back(str);
                str.clear();

            }

        }
        while(str.size()<k && str.size()!=0){
            str+=fill;
        }
        if(str.size()!=0) ans.push_back(str);
        return ans;
        
    }
};