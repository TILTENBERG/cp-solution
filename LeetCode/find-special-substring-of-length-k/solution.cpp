class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        
        for(int i=0;i<s.size();++i){
            string str;
            for(int j=i;j<i+k;++j){
                if(str.empty() || str.back()==s[j]) str+=s[j];
                else{
                    str.clear();
                    break;
                }
            }
            if(str.size()==k){
                if(i==0 || s[i-1]!=str[0]){
                    if(i+k==s.size() || s[i+k]!=str[0]){
                        return true;
                    }
                }
            }
            else{
                str.clear();
            }
        }
        return false;

        
    }
};