class Solution {
public:
    int findClosest(int x, int y, int z) {
        int osum=abs(x-z);
        int tsum=abs(y-z);
    if(osum < tsum){
        return 1;
    }else if (osum==tsum){
        return 0;
    }else {
        return 2;
    }
    }
};