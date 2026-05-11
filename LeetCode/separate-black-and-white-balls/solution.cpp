class Solution {
public:
    long long minimumSteps(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string str=s;
        unsigned long long ans=0;
        unsigned long long l=0;
        while(l<s.size()){
            if(s[l]=='1'){
                for(int i=l+1;i<s.size();++i){
                    if(s[i]=='0') ans++;

                }
                break;
            }
            l++;
    
    }
    unsigned long long temp=ans;
    for(int i=l+1;i<s.size();++i){
        if(s[i]!='1'){
            temp--;
        }
        else{
            ans+=temp;
        }


    }
    return ans;
    }
};