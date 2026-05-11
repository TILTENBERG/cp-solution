class Solution {
public:
    int minMaxDifference(int num) {
        int digmax=9;
        int digmin=0;
        vector<int> vct;
        while(num>0){
            vct.push_back(num%10);
            num/=10;


        }
        reverse(vct.begin(),vct.end());
        int max=0;
        int min=0;
        for(int i=0;i<vct.size();++i){
            if(vct[i]!=digmax ){
                for(int j=i;j<vct.size();++j){
                    if(vct[j]==vct[i]) max=max*10+digmax;
                    else max=max*10+vct[j];
                    

                }
                break;

            }
            else max=max*10+vct[i];
            
        }
        for(int i=0;i<vct.size();++i){
            if(vct[i]!=digmin){
                for(int j=i;j<vct.size();++j){
                    if(vct[j]==vct[i]) min=min*10+digmin;
                    else min=min*10+vct[j];
                    

                }
                break;

            }
            else min=min*10+vct[i];
            
        }

        

        
        cout<<max<<" "<<min;
        return max-min;
        
    }
};