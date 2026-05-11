class Solution {
public:
    bool canChange(string start, string target) {
        int p1=0;
        int p2=0;
        int n=start.size();
        while(p1<n || p2<n){
            if(target[p2]=='_'){
                p2++;
                continue;
            }
            if(start[p1]=='_'){
                p1++;
                continue;
            }
            if(start[p1]==target[p2]){
                if(start[p1]=='L' && p1>=p2){
                    p1++;
                    p2++;
                }
                else if(start[p1]=='R' && p1<=p2){
                    p1++;
                    p2++;
                }
                else return 0;
                
            }
            else return 0;

            
        }
        return 1;

        
    }
};