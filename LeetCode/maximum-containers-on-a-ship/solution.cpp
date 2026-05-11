class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int num=maxWeight/w;
        return num>n*n ? n*n : num;
        
    }
};