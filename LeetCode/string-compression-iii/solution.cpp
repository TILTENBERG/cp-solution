class Solution {
public:
    string compressedString(string word) {
        ios_base::sync_with_stdio(NULL);
        cin.tie(0);
        cout.tie(0);
        string ans;
        int num=1;
        char temp=word[0];
        for(int i=1;i<word.size();++i){
            if(word[i]==temp){
                num++;
            }
            if(num==9 || temp!=word[i] ){
                if(num==9){
                    ans+=(to_string(num)+temp);
                    num=0;
                    if(temp!=word[i+1] && i+1<word.size()){
                        temp=word[i+1];
                        num=0;
                    }
                }
                else{

                    ans+=(to_string(num)+temp);
                    temp=word[i];
                    num=1;
                }
            }

        } 
        if(num!=0) ans+=(to_string(num)+temp);
        return ans;
        
    }
};
