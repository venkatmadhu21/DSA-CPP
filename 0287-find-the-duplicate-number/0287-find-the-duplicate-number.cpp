class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
       } 
       for(auto& ch : mpp){
        if(ch.second > 1){
            return ch.first;
        }
       }
      return -1;
    }
};