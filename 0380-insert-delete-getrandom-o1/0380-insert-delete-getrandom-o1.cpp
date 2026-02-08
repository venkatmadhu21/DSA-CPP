class RandomizedSet {
private:
    vector<int> nums;
    unordered_map<int, int> mp;
public:
    RandomizedSet() {}
    bool insert(int val) {
        if (mp.count(val)) return false;
        nums.push_back(val);
        mp[val] = nums.size() - 1;
        return true;
    }
    bool remove(int val) {
        if (!mp.count(val)) return false;
        int idx = mp[val];
        int lastVal = nums.back();
        nums[idx] = lastVal;
        mp[lastVal] = idx;
        nums.pop_back();
        mp.erase(val);
        return true;
    }
    int getRandom() {
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};