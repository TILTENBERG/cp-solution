class Solution {
public:
    int maxFreqSum(string s) {
        int mx1=0,mx2=0;
        unordered_map<char,int> mp1,mp2;
        for(char c:s){
            if(c=='a' || c=='e' ||c=='i' ||c=='o' || c=='u'){
                mp1[c]++;
                mx1=max(mp1[c],mx1);
                
            }
            else{
                mp2[c]++;
                mx2=max(mp2[c],mx2);
                
            }
        }
        return mx1+mx2;
        
        
    }
};