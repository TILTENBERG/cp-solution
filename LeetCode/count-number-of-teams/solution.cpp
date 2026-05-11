class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans=0;
        int size=rating.size();
        for(int mid=0;mid<size;++mid){
            int left_low=0;
            int right_high=0;
            for(int left=mid-1;left>=0;--left){
                if(rating[left]<rating[mid]) left_low++;
            }
            for(int right=mid+1;right<size;++right){
                if(rating[right]>rating[mid]) right_high++;
            }
            ans+=left_low*right_high;
            int left_high=mid-left_low;
            int right_low=size-mid-1-right_high;
            ans+=left_high*right_low;
        }
        return ans;
        
    }
};