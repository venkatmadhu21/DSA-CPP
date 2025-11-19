#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> st(nums.begin(), nums.end());
        
        int val = original;
        while (st.count(val)) {
            val *= 2;
        }
        
        return val;
    }
};
