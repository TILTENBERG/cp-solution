class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int add=0;
        int sub=0;
        for(string s: operations){
            if(s[0] == '-' || s[2]=='-') sub++;
            else add++;
        }
        return add-sub;
        
    }
};