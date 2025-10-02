class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(char c : s) mpp[c]++;
        multimap<int,char> sp;
        for(auto &s : mpp) sp.insert({-s.second,s.first});
        string res="";
        for(auto &p : sp) res.append(-p.first,p.second);
        return res;
    }
};