class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;
        vector<int> vct(26);
        for (char& c : s) {
            ++vct[c - 'a'];
        }
        while (t--) {
            vector<int> v(26);
            v[0] = vct[25];
            v[1] = (vct[25] + vct[0]) % MOD;
            for (int i = 2; i < 26; ++i) {
                v[i] = vct[i - 1];
            }
            vct = v;
        }
        int ans = 0;
        for (int i = 0; i < 26; ++i) {
            ans = (ans + vct[i]) % MOD;
        }
        /*for(auto it:mp){

            if(it.second) cout<<it.first<<" "<<it.second<<"\n";
        }
        */
        return ans;

        /*
        a->t=26 ab
        b->t=25 ab
        c-> t=24 ab
        d-> t=23 ab
        z-> t=1 ab





        */
    }
};