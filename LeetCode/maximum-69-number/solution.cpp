class Solution {
public:
    int maximum69Number (int num) {
        vector<int> vct;
        int k=num;
        while(k>0){
            vct.push_back(k%10);
            k/=10;
        }
        int ans=0;
        bool is=false;
        for(int i=vct.size()-1;i>=0;i--){
            if(vct[i]==9) ans=ans*10+9;
            else if(is==false){
                ans=ans*10+9;
                is=true;
            }
            else ans=ans*10+6;
            
        }
        return ans;
        
    }
};