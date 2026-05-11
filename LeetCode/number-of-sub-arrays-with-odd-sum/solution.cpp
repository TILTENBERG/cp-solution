class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int modul=1e9+7;
        int sum=0;
        int oddcnt=0,evencnt=1;
        int cnt=0;
        for(int num: arr){
            sum+=num;
            if(sum%2==0){
            cnt+=oddcnt;
            evencnt++;
            }else{
                cnt+=evencnt;
                oddcnt++;
            }
            cnt%=(modul);

        }
        return cnt;

        
    }
};