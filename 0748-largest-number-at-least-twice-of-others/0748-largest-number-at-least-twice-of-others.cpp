class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        priority_queue<int>pq(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int i : nums) mpp[i]=i;
        int n1=pq.top();pq.pop();
        int n2=pq.top();pq.pop();
        if(n1 >= 2 * n2){
            for(int i =0;i<nums.size();i++){
                if (nums[i] == n1) return i;
            }
        }
        return -1;
    }
};