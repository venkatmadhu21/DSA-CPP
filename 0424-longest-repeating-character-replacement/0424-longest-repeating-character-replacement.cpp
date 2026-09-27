class Solution {
public:
    int characterReplacement(string s, int k) {
         int maxLen=0;
    unordered_map<int,int>mpp;
    int maxi=INT_MIN;
    int l=0,r=s.size()-1;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        maxi=max(maxi,mpp[s[i]]);
        while((i-l+1)-maxi > k){
            mpp[s[l]]--;
            l++;
        }
        maxLen=max(maxLen,i-l+1);
    }
    return maxLen;
    }
};