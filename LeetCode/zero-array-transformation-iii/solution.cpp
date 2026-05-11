class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(),queries.end());
        priority_queue<int> pr;
        vector<int> vct(nums.size()+1,0);
        int cnt=0;
        for(int i=0, j=0;i<nums.size();++i){
            cnt+=vct[i];
            while(j<queries.size() && queries[j][0]==i){
                pr.push(queries[j][1]);
                ++j;
            }
            while(cnt<nums[i] && !pr.empty() && pr.top()>=i){
                ++cnt;
                vct[pr.top()+1]-=1;
                pr.pop();

            }
            if(cnt<nums[i]) return -1;

        }
        return pr.size();

        


        
    }
};