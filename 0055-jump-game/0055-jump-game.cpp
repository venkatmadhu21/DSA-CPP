class Solution {
public:
    bool canJump(vector<int>& nums) {
        long long far=0;
        for(int i=0;i<nums.size();i++){
            if(i  > far ) return false;
            far = max(far,(long long)i+nums[i]);
            if(far >= nums.size()-1) return true;
        }
        return true;
    }
};