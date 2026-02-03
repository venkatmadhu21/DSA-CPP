class Solution {
public:
    bool canJump(vector<int>& nums) {
        long long  n= nums.size();
        long long far = 0;
        for(int i =0;i<n;i++){
            if(i > far) return false;
            far= max((long long)nums[i]+i,far);
            if(far > n -1) return true;
        }
        return true;
    }
};