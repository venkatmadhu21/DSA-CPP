class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        long long diff=0;
        long long start=0;
        long long curr=0;
        long long total=0;
        for(int i=0;i<n;i++){
            diff=(long long )gas[i] - cost[i];
            curr+=diff;
            total+=diff;
            if(curr < 0){
                start=i+1;
                curr=0;
            }
        }
        return (total >=0) ? start % n : -1;
    }
};