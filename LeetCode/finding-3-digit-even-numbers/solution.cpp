class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int max=0;
        int min=9;
        vector<int> vct(10);
        vector<int> ans;
        for(int &num:digits){
            vct[num]++;
            if(num<min && num!=0) min=num;
            if(num>max && num!=0) max=num;
        }
        for(int i=min*100;i<max*100+99;i+=2){
            int num=i;
            int a,b,c;
            int cntA=0,cntB=0,cntC=0;
            a=num%10;
            cntA++;
            b=(num/10)%10;
            if(b==a) cntA++;
            else cntB++;
            c=(num/100)%10;
            if(c==a) cntA++;
            else if(c==b) cntB++;
            else cntC++;
            if(vct[a]>=cntA && vct[b]>=cntB && vct[c]>=cntC ) ans.push_back(i);

        }
        return ans;

        

        
    }
};