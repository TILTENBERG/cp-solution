class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        long long sum=0;
        for(auto & it:gifts){
            sum+=it;
            q.push(it);

        }
        while(k--){
            int max=q.top();
            sum-=(max-sqrt(max));
            q.pop();
            q.push(sqrt(max));
        }
        return sum;
    }
};