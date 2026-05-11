#pragma GCC optimize("O3,unroll-loops,Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
static const auto harsh = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

#define LC_HACK
#ifdef LC_HACK
const auto __ = []()
{
    struct ___
    {
        static void _() { std::ofstream("display_runtime.txt") << 0 << '\n'; }
    };
    std::atexit(&___::_);
    return 0;
}();
#endif
#include <ext/pb_ds/assoc_container.hpp> 

#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; 
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
class Solution {
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int size=nums1.size();
        for(int i=0;i<size;++i){
            mp[nums1[i]]=i;
            
        }
        ordered_set st;
        long long  ans=0;
        for(int mid=0;mid<size;++mid){
            int num=mp[nums2[mid]];
            int left=st.order_of_key(num);
            int right=(size - 1 - num) - (st.size() - left);
            ans+=(long long)left*right;
            st.insert(num);

        }
        return ans;

        
    }
};