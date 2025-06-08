class Solution {
public:
   void backtrack(int target,int index,vector<int> & candidates,vector<int>path,vector<vector<int>>& result){
        if(target==0){ result.push_back(path);
        return;
        }
        if(index >= candidates.size() || target < 0) return ;
        if(candidates[index]<= target){
            path.push_back(candidates[index]);
            backtrack(target - candidates[index],index,candidates,path,result);
            path.pop_back();
        
        }
        backtrack(target,index + 1 ,candidates,path,result);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(target,0,candidates,path,result);
        return result;
    }
};