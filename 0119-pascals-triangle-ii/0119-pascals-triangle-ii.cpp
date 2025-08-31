class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long val = 1; 
        for(int c=0; c<=rowIndex; c++){
            row.push_back(val);
            val = val * (rowIndex - c) / (c + 1);
        }
        return row;
    }
};