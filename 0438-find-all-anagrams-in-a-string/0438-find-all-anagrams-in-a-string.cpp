class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> freqP(26, 0), freqS(26, 0); 
        for(char c : p) {
            freqP[c - 'a']++;
        } 
        int k = p.size();  
        for(int i = 0; i < s.size(); i++) {
            freqS[s[i] - 'a']++;       
            if(i >= k) {
                freqS[s[i - k] - 'a']--;
            }       
            if(freqS == freqP) {
                res.push_back(i - k + 1);
            }
        }    
        return res;
    }
};