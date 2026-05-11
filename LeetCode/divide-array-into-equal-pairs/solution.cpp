class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_set<int> st;
        for(int  num:nums){
            mp[num]++;
            st.insert(num);
        }
        for( int  num:st){
            if(mp[num]%2==1) return 0;
        }
        return 1;


        
    }
};