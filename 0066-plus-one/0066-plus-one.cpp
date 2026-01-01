class Solution {
public:
    #include <vector>
#include <iostream>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();
    
    // Start from the last digit
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            // If current digit is less than 9, just increment and return
            digits[i]++;
            return digits;
        }
        // If digit is 9, set it to 0 (carry the one to the next digit)
        digits[i] = 0;
    }
    
    // If all digits were 9, we need an extra leading 1
    digits.insert(digits.begin(), 1);
    return digits;
}
 

};