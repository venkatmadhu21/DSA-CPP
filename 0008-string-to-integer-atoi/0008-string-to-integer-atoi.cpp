class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long result = 0;
        int sign = 1;
        while (i < n && s[i] == ' ') i++;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0'; //characters are stored as ASCII so '0'.0
            if (result > (INT_MAX - digit) / 10) { //checking if the res exceeds if it is multiplied by 10 in the next step.
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
            i++;
        }
        return (int)(result * sign);
    }
};
