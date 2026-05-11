class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        goal+=goal;
        for(int i=0;i<=s.size();++i){
            if(goal[i]==s[0]){
            if(goal.substr(i,s.size())==s) return 1;
            }
            
        }
        return 0;



        

    }
};