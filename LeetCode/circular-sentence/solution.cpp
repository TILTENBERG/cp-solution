class Solution {
public:
    bool isCircularSentence(string sentence) {
        int size = sentence.size() - 1;
        if (sentence[0] != sentence[size])
            return 0;
        for (int i = 0; i < size; ++i) {
            if (sentence[i] == ' ') {
                if (sentence[i - 1] != sentence[i + 1])
                    return 0;
            }
        }
        return 1;
    }
};