class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int ans=0;
        // 0 1 0 0 1 0 1 0 1 0 0 1
        // 1 1 0 1 1 1 0
        // 0 1 0 1 0 0 1
        for(int i=0;i<k-1;++i){
            colors.push_back(colors[i]);
        }
        int size=colors.size();
        int sz=2;
        for(int i=1;i<size-1;++i){
            if(colors[i]!=colors[i-1] && colors[i]!=colors[i+1]){
                sz++;
                if(sz==k){
                    ans++;
                    sz--;
                }
            
            }
            else{
                sz=2;
            }

        }
        return ans;
        
    }
};