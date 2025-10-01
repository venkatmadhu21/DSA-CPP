class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        int empty=numBottles;
        while(empty>=numExchange){
            int neww=empty/numExchange;
            total+=neww;
            empty=neww + (empty % numExchange);
        }
        return total;
    }
};