class Solution {
public:
    int maxDistance(vector<int>& colors) {


        int ans = 0;
        int size = colors.size();
        for(int i=size-1;i>0;--i){
            if(colors[i] !=colors[0]) {
                ans = i;
                break;
            }
        }
        for(int i=0;i<size-1;++i){
            if(colors[i]!=colors[size-1]){
                ans = max(ans,size-1-i);
                break;
            }
        }
        return ans;
        
    }
};