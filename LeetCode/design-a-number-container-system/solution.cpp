class NumberContainers {
public:
    unordered_map<int, int> mp;
    unordered_map<int, set<int>> mpst;
    NumberContainers() {}

    void change(int index, int number) {
        if (mp.find(index) != mp.end()) {
            int tmp = mp[index];
            mp[index] = number;
            mpst[tmp].erase(index);
            if(mpst[tmp].size()==0) mpst.erase(tmp);
            mpst[number].insert(index);

        } else {
            mp[index] = number;
            mpst[number].insert(index);
        }
    }

    int find(int number) {
        if (mpst.find(number) != mpst.end()) {
            return *mpst[number].begin();
        } else
            return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */