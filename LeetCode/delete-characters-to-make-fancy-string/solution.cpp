class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        char tmp=s[0];
        int cnt=0;
        for(char c:s){
            if(tmp==c){
                cnt++;
                if(cnt<3){
                    ans+=tmp;
                    //cout<<tmp<<" "<<cnt<<endl;
                }
            }
            else{
                tmp=c;
                cnt=1;
                ans+=tmp;
            }
            
        }
        return ans;
        
    }
};