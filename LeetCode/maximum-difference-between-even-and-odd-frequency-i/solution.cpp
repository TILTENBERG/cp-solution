class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mp;
        for (char& c : s) {
            mp[c]++;
        }
        int mx = INT_MIN;
        int mn = INT_MAX;
        for (auto [  ch,  i ] : mp) {
            if (i % 2 == 0){
                if(i<mn) mn=i;
            }

             
            else if (i > mx)
                mx = i;
        }
        //cout<<mx<<" "<<mn;
        return mx - mn;
    }
};