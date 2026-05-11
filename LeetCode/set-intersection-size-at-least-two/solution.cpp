class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& X, vector<int>& Y){ 
            const int x0=X[0], x1=X[1], y0=Y[0], y1=Y[1]; 
            return (x1==y1)?x0>y0:x1<y1; 
        });
        int ans = 2;
        int prev1 = intervals[0][1];
        int prev2 = intervals[0][1] - 1;
        for(int i=1;i<intervals.size();++i){
            const int L  = intervals[i][0], R = intervals[i][1];
            if(prev2 >= L) continue;
            const bool NO = L>prev1;
            ans +=1+NO;
            prev2 = (NO) ? R-1:prev1;
            prev1 = R;

        }
        return ans;
    }
};