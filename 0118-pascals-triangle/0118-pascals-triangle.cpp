class Solution {
public:
    vector<int> gen(int row){
         long long  res=1;
         vector<int>ans;
         ans.push_back(1);
        for(int col=1;col<row;col++){
            res=res * (row-col);
            res=res/ (col);
            ans.push_back(res);
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas;
        for(int i=1;i<=numRows;i++){
            pas.push_back(gen(i));
        }
        return pas;
    }
};