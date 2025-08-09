class MyCalendar {
    private :
    vector<pair<int,int>> booking;
public:
    MyCalendar() {}
    bool book(int startTime, int endTime) {
        for(auto &b:booking){
            int s=b.first ;int  e=b.second;
            if(startTime < e && s < endTime){
                return false;
            }
        }
        booking.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */