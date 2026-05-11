class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        sentence+=' ';
        int size=searchWord.size();
        int res=0;
        string str;
        for(int i=0;i<sentence.size();++i){
            if(sentence[i]!=' '){
                str+=sentence[i];
            }
            else{
                res++;
                if(str.size()>=size){
                    if(str.substr(0,size)==searchWord) return res;
                }
                str.clear();
            }
            
            
        }
        return -1;
        

        
    }
};