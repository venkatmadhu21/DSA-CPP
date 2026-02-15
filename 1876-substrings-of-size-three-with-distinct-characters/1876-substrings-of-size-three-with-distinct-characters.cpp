class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        if (n < 3) return 0;
unordered_map<int,int>mpp;
    int cnt =0;
    for(int i=0;i<3;i++){
        mpp[s[i]]++;
        if(mpp.size()==3) cnt++;
    }
    int l=0;
    for(int i=3;i<s.size();i++){
        mpp[s[i]]++;
        mpp[s[l]]--;
        if(mpp[s[l]]==0) mpp.erase(s[l]);
        l++;
        if(mpp.size()==3) cnt++;
        
    }
    return cnt;
}
};
