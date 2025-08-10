class StockPrice {
private:
    unordered_map<int, int> timePrice;
    map<int, int> priceCount;         
    int latestTime;

public:
    StockPrice() {
        latestTime = 0;
    }
    
    void update(int timestamp, int price) {
        if (timePrice.count(timestamp)) {
            int oldPrice = timePrice[timestamp];
            priceCount[oldPrice]--;
            if (priceCount[oldPrice] == 0) {
                priceCount.erase(oldPrice);
            }
        }
        
        timePrice[timestamp] = price;
        priceCount[price]++;
        latestTime = max(latestTime, timestamp);
    }
    
    int current() {
        return timePrice[latestTime];
    }
    
    int maximum() {
        return priceCount.rbegin()->first;
    }
    
    int minimum() {
        return priceCount.begin()->first;
    }
};
