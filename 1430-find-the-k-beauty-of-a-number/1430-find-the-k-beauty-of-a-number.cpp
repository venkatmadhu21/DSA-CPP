class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size();
        int count = 0;

        for (int i = 0; i <= n - k; i++) {
            string sub = s.substr(i, k);   // get substring of length k
            int val = stoi(sub);           // convert to integer

            if (val != 0 && num % val == 0)  // check divisibility
                count++;
        }
        return count;
    }
};
