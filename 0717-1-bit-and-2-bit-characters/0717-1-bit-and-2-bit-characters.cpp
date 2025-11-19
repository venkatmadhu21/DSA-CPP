#include <vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int count = 0;
        
        // Count consecutive 1's from the end (before the last 0)
        for (int i = n - 2; i >= 0 && bits[i] == 1; --i) {
            count++;
        }
        
        // If even number of 1's -> last 0 is single (1-bit char)
        return count % 2 == 0;
    }
};
