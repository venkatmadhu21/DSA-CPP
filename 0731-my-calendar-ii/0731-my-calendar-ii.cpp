class MyCalendarTwo {
private:
    vector<pair<int, int>> booked;
    vector<pair<int, int>> overlaps;
public:
    MyCalendarTwo() {}
    bool book(int start, int end) {

        for (auto &b : overlaps) {
            if (start < b.second && b.first < end) {
                return false; 
            }
        }
        for (auto &b : booked) {
            if (start < b.second && b.first < end) {
                int overlapStart = max(start, b.first);
                int overlapEnd = min(end, b.second);
                overlaps.push_back({overlapStart, overlapEnd});
            }
        }
        booked.push_back({start, end});
        return true;
    }
};
