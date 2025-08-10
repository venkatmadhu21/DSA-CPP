class MyCalendarTwo {
private:
    vector<pair<int, int>> booked;
    vector<pair<int, int>> overlaps;

public:
    MyCalendarTwo() {}

    bool book(int start, int end) {
        // Step 1: Check triple booking
        for (auto &b : overlaps) {
            if (start < b.second && b.first < end) {
                return false; // Triple booking detected
            }
        }

        // Step 2: Record new double bookings
        for (auto &b : booked) {
            if (start < b.second && b.first < end) {
                int overlapStart = max(start, b.first);
                int overlapEnd = min(end, b.second);
                overlaps.push_back({overlapStart, overlapEnd});
            }
        }

        // Step 3: Add to booked
        booked.push_back({start, end});
        return true;
    }
};
