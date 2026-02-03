class Solution {
public:
    bool canJump(vector<int>& nums) {
        long long far =0;
        for(int i=0;i<nums.size();i++){
            if(i > far) return false;
            far = max(far,(long long) nums[i] +i);
        }
        return true;
    }
};