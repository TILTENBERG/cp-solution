class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        vector<pair<int,int>> friendtimes;
        for(int i=0;i<times.size();++i){
            friendtimes.push_back({times[i][0],i});
            friendtimes.push_back({times[i][1],-i});
            
        }
        sort(friendtimes.begin(),friendtimes.end());
        priority_queue <int, vector<int>, greater<int> > availablesit;
        for(int i=0;i<times.size();++i) {
            availablesit.push(i);
        }
        priority_queue<pair<int,int> ,vector<pair<int,int>> , greater<pair<int,int>>> sitend;
        for(auto & it:friendtimes){
            int time=it.first;
            int friendind=it.second;
            while(!sitend.empty() && sitend.top().first<=time){
                availablesit.push(sitend.top().second);
                sitend.pop();
            }
            if(friendind>=0){
                sitend.push({times[friendind][1],availablesit.top()});
                if(friendind==targetFriend){
                    return availablesit.top();
                }
                availablesit.pop();
            }

        }
        return -1;
            


           
            
           



        }






        
    
};