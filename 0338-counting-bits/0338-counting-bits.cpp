class Solution {
public:
    int Count(int num ){
        int count=0;
        while(num>0){
            num=num & (num -1);
            count ++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> res(n+1);
            for(int i=0;i<=n;i++){
                res[i]=Count(i);
            }
            return res;
        }

};