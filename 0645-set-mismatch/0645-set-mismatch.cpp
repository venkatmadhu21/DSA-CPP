class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     vector<int> res;
    int n=nums.size();
    int sum=0 , asum=0,fin=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        mpp[nums[i]]++;
    }
    int repeat=-1;
    for(auto& ch : mpp){
        if(ch.second > 1){
           repeat=ch.first;
            break;
        }
    }
    asum=n* (n+1)/2;
    fin=asum-(sum-repeat);
    res.push_back(repeat);
    res.push_back(fin);
    return res; 
    }
};