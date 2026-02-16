class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int r = plants.size()-1;
        int l =0;
        int cnt=0;
        int ca=capacityA;
        int cb=capacityB;
        while(l < r){
            if(ca < plants[l]){
                cnt++;
                ca=capacityA;
            }
            ca-=plants[l];
            l++;
            if(cb<plants[r]){
                cnt++;
                cb=capacityB;
            }
            cb-=plants[r];
            r--;
            if(l==r){
                if(max(cb,ca) < plants[l]){
                    cnt++;
                }
            }
        }
        return cnt;
    
    }
};