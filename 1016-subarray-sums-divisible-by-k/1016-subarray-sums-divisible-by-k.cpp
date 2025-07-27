class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int presum=0;int count =0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int mod=(presum % k + k) % k;
            count+=mpp[mod];
            mpp[mod]++;
        }
        return count;
    }
};