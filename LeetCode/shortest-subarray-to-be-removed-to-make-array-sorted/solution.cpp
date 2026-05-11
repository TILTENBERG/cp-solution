class Solution {
public:
    int lower_bound(vector<int>& vct, int target) {
        int l = 0;
        int r = vct.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vct[mid] >= target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }

    int findLengthOfShortestSubarray(vector<int>& arr) {
        int ans = 0;
        stack<int> left, right;
        left.push(0);
        int size = arr.size();
        int i;
        for (i = 0; i < size; ++i) {
            if (arr[i] >= left.top())
                left.push(arr[i]);
            else
                break;
        }
        if (i == size)
            return 0;
        right.push(arr[size - 1]);
        vector<int> vct;
        vct.push_back(arr[size - 1]);
        for (int j = size - 2; j >= i; --j) {
            if (arr[j] <= right.top()) {
                right.push(arr[j]);
                vct.push_back(arr[j]);
            } else
                break;
        }
        reverse(vct.begin(), vct.end());
        ans = size - (left.size() - 1 + vct.size());
        int subt = -1;
        int temp = INT_MAX;
        while (left.size() > 0) {
            int target = left.top();
            subt++;
            int id = lower_bound(vct, target);

            // cout << id + subt << endl;
            temp = min(temp, id + subt);

            left.pop();
        }

        return ans + temp;
    }
};