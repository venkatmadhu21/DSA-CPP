class Solution {
public:
    int getLucky(string s, int k) {
        string numStr = "";
        for (char c : s) {
            int val = (c - 'a' + 1); 
            numStr += to_string(val);
        }
        int result = 0;
        while (k-- > 0) {
            result = 0;
            for (char c : numStr) {
                result += (c - '0');
            }
            numStr = to_string(result);
        }      
        return result;
    }
};
