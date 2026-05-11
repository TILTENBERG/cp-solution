class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0;
        int size = moves.size();
        for (char& c : moves) {
            if (c == 'L')
                l++;
            else if (c == 'R')
                r++;
        }
        return (max(l, r) + (size - l - r) - min(l,r));
    }
};