class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s= to_string(x);
        int size = s.size();
        for(int i=0;i<size/2; ++i){
            if(s[i] != s[size-i-1]) return false;
        } return true;
        
    }
};