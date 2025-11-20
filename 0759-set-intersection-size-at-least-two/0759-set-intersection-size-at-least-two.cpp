#include <vector>
#include <algorithm>

class Solution {
public:
    int intersectionSizeTwo(std::vector<std::vector<int>>& intervals) {
        // Sort intervals by end point ascending
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
        
        int result = 0;
        int second_last = -1;
        int last = -1;
        
        for (const auto& interval : intervals) {
            int start = interval[0];
            int end = interval[1];
            
            // Both points already in interval
            if (start <= second_last) {
                continue;
            }
            // No points in interval, add two distinct points at end
            else if (start > last) {
                second_last = end - 1;
                last = end;
                result += 2;
            }
            // Exactly one point (last) in interval, add one more
            else {
                result += 1;
                if (last < end) {
                    second_last = last;
                    last = end;
                } else {
                    // last == end, add end-1 as second_last
                    second_last = end - 1;
                }
            }
        }
        
        return result;
    }
};
