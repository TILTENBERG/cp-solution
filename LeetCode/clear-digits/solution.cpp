class Solution {
public:
    string clearDigits(string s) {
        for(int i=0;i<s.size();++i){
            if(s[i]<58){
                for(int j=i;j>=0;--j){
                    if(s[j]>96){
                        s[j]='^';
                        break;
                    }

                }
                s[i]='^';
            }
            
        }
        string ans;
        for(int i=0;i<s.size();++i){
            if(s[i]!='^'){
                ans+=s[i];
            }
            
        }
        return ans;



        
    }
};