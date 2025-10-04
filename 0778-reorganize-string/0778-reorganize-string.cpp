class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;
        for(char c : s) freq[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto &p : freq) {
            if(p.second > (s.size()+1)/2) return "";
            pq.push({p.second, p.first});
        }
        string result = "";
        pair<int,char> prev = {0, '#'};
        while(!pq.empty()) {
            auto [count, ch] = pq.top(); pq.pop();
            result += ch;
            count--;
            if(prev.first > 0) pq.push(prev); 
            prev = {count, ch}; 
        }
        return result;
    }
};
