class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int maxi=nums[0];
     int sum=0;
     for(int i : nums)
     {
         sum=sum+i;
         maxi=max(maxi,sum);
         if(sum < 0)
         {
             sum=0;
         }
     }
    return maxi;
}
};