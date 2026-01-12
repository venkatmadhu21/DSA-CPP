class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int n=s.size();
        int l=0;
        int maxi=0;
        for(int r =0;r<n;r++){
            mpp[s[r]]++;
            while(mpp[s[r]] > 1) {
                mpp[s[l]]--;
                l++;
            
            }
                maxi=max(maxi,r-l +1);
        }
        return maxi;
    }
};