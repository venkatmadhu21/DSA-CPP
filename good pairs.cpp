class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        map<int,int> final;
        for(int i =0;i<n;i++)
        {
            count+=final[nums[i]];
            freq[nums[i]]++;
        }
        return count;
    }
    
};
