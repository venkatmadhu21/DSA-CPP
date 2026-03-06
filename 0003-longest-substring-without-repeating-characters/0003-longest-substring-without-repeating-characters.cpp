class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0) return 0;
    int l=0;
    int maxi=INT_MIN;
    unordered_map<int,int>mpp;
    for(int r=0;r<n;r++){
        mpp[s[r]]++;
        while(mpp[s[r]]>1){
            mpp[s[l]]--;
            l++;
        }
        maxi=max(maxi,abs(l-r-1));
    }
    return maxi;
}
};