class Solution {
public:
    int reverseDegree(string s) {
        // 97-> 26
        //122->1
        int ans=0;
        int ind=1;
        for(char & c:s){
            ans+=(123-c)*ind;
            ind++;


        }
        return ans;
        
    }
};