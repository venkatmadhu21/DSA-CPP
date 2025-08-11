#include <bits/stdc++.h>
using namespace std;

class MedianFinder {
private:
    priority_queue<int> maxHeap; // left half (max-heap)
    priority_queue<int, vector<int>, greater<int>> minHeap; // right half (min-heap)

public:
    MedianFinder() {}

    void addNum(int num) {
        // Step 1: Add to maxHeap
        maxHeap.push(num);

        // Step 2: Balance - move largest from maxHeap to minHeap
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        // Step 3: Maintain size property (maxHeap can have 1 more element)
        if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        return maxHeap.top();
    }
};
