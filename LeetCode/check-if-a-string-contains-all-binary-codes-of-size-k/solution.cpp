class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        int req_count = 1 << k;

        if (n < req_count + k - 1)
            return false; // Early exit: s is too short

        vector<bool> seen(req_count, false);
        int current_val = 0;
        int mask = req_count -
                   1; // Creates a mask of k ones (e.g., k=3 -> 111 in binary)
        int unique_count = 0;

        // Initialize the first window of size k-1
        for (int i = 0; i < k - 1; ++i) {
            current_val = (current_val << 1) | (s[i] - '0');
        }

        // Slide the window across the rest of the string
        for (int i = k - 1; i < n; ++i) {
            current_val = ((current_val << 1) & mask) | (s[i] - '0');

            if (!seen[current_val]) {
                seen[current_val] = true;
                unique_count++;

                // Early exit if all permutations are found
                if (unique_count == req_count)
                    return true;
            }
        }

        return false;
    }
};