class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> final;
        for(int i=0;i<nums.size();i++){
            if(final.find(nums[i])!=final.end() && abs(i -final[nums[i]])<=k){
                return true;
            }
            final[nums[i]]=i;
        }
        return false;
    }
};
