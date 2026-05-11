class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<int> bits(nums.size());
        vector<int> sortind;
        sortind.push_back(0);
         int temp=0;
        for(int i=0;i<nums.size();++i){
            int num=nums[i];
            int cur=0;
           
            while(num>0){
                if(num & 1) cur++;
                num>>=1;
            }
           

            if(i!=0 && cur!=temp){
                sortind.push_back(i);
            }
            temp=cur;

            
        }
       
        for(int i=1;i<sortind.size();++i){
            sort(nums.begin()+sortind[i-1],nums.begin()+sortind[i]);
        }
        sort(nums.begin()+sortind[sortind.size()-1],nums.end());
      
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]>nums[i+1]) return 0;
        }

      
        return 1;


        
        
    }
};