class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int best=nums[0]+0;
        int result=0;
        for(int j=1<j<n;j++)
        {
        	result=max(result,best+nums[j]-j);
        	best=max(best,nums[j]+j);
		}
		return result;

    }
};
