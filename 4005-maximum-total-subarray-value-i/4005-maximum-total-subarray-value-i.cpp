class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
    long long  n=nums.size();
    long long  maxi=INT_MIN;
    long long mini=INT_MAX;
    maxi=*max_element(nums.begin(),nums.end());
    mini=*min_element(nums.begin(),nums.end());
    long long  sum=(maxi - mini )*k;
    return sum;
    }
};