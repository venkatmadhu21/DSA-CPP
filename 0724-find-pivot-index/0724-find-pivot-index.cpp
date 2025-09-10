class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0,tsum=0;
        for(int i : nums){
            tsum+=i;
        }
        for(int i=0;i<nums.size();i++){
            rsum=tsum - lsum - nums[i];
            if(lsum == rsum ) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};