class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int size=code.size();
        vector<int> ans(size,0);
        for(int i=0;i<size;++i){
            code.push_back(code[i]);
        }
        if(k==0) return ans;
        if(k>0){
            int sum=0;
            for(int i=1;i<=k;++i){
                sum+=code[i];
            }
            ans[0]=sum;
            int id=1;
            int i=k+1;
            while(id<size){
                sum-=code[i-k];
                sum+=code[i];
                ans[id]=sum;
                id++;
                i++;
            }

           
        }
        else{
            int sum=0;
            for(int i=size+k;i<size;++i){
                sum+=code[i];
            }
            ans[0]=sum;
            int id=1;
            int i=size;
            while(id<ans.size()){
                sum-=code[i+k];
                sum+=code[i];
                ans[id]=sum;
                id++;
                i++;
            }

        }
        return ans;
        
    }
};