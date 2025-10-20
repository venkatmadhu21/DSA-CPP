class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        
        for (const string& op : operations) {
            if (op == "X++" || op == "++X") {
                x += 1;
            } else if (op == "--X" || op == "X--") {
                x -= 1;
            }
        }

        return x;
    }
};
