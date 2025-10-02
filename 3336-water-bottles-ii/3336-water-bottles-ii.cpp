class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int empty=numBottles;
        int tota=numBottles;
        while(empty>=numExchange){
            int neww=1;
            tota+=neww;
            empty=neww + (empty-numExchange);
            numExchange++;
        }
        return tota;
    }
};