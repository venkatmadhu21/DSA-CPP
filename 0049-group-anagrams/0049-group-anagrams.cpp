class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto &w: strs){
            string key=w;
            sort(key.begin(),key.end());
            mp[key].push_back(w);
        }
        vector<vector<string>>res;
        // res.reserve(mp.size());
        for(auto &p: mp){
            res.push_back( (p.second) );
        }
        return res;
    }
};