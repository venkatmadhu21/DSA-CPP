class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       unordered_map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
       }
    for(auto &p : mpp){
        if(p.second ==1){
            return p.first;
        }
    }
        return -1;
    }
};