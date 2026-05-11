class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        bool is;
        for (int i = 0; i < words.size(); ++i) {
            string sub = words[i];
            for (int j = 0; j < words.size(); j++) {
                is=false;
                string target = words[j];
                
                if (target == sub || target.size()<sub.size())
                    continue;
                else{
                    
                    //cout<<sub<<" "<<target<<endl;
                for (int k = 0; k <= target.size() - sub.size(); ++k) {
                    if (target.substr(k, sub.size()) == sub) {
                        ans.push_back(sub);
                        is=true;
                        break;
                    }
                }
                }
                if(is==true) break;
            }
        }
        return ans;
    }
};