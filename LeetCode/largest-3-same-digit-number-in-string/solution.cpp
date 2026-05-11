class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;
        int mx=0;
        for(int i=0;i<num.size()-2;++i){
            string tmp=num.substr(i,3);
            if(tmp[0]==tmp[1] && tmp[1]==tmp[2]){
                int dig=stoi(tmp);
                mx=max(dig,mx);
                ans=to_string(mx);

                
            }


        }
        if(ans=="0") return "000";
        else return ans; 
        
    }
};