class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> st;
        for(auto & it:banned){
            st.insert(it);
        }
        vector<int> vct;
        for(int i=1;i<=n;++i){
            if(st.find(i)==st.end()) vct.push_back(i);
        }
        long long sum=0;
        int cnt=0;
        for(int i=0;i<vct.size();++i){
            if(sum+vct[i]<=maxSum){
                sum+=vct[i];
                cnt++;
            }
            else break;
          

        }
          return cnt;

        
    }
};