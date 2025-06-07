class Solution {
public:
    void backtrack(vector<vector<int>>&result,vector<int>& nums,vector<int>subset,int index){
            result.push_back(subset);
            for(int i=index;i<nums.size();i++){
                subset.push_back(nums[i]);
                backtrack(result,nums,subset,i + 1);
                subset.pop_back();
        }
    }



    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(result,nums,subset,0);
        return result;        
    }
};