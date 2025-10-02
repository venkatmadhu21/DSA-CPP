class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,curr=0,prev=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) curr++;
            else{
                ans=max(ans,prev+curr);
                prev=curr;
                curr=0;
            }
        }
        if(curr==nums.size())return curr -1;
        return max(ans,prev+curr);
    }
};