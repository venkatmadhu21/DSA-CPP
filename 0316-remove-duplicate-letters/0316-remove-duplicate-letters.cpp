class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char ,int > freq ;
        unordered_set<char> visited;
        stack < char> stk;
        for(char c : s){
            freq[c]++;
        }
        for(char c : s){
            freq[c]--;
            if(visited.count(c)) continue;

            while(!stk.empty() && c < stk.top() && freq[stk.top()]> 0){
                visited.erase(stk.top());
                stk.pop();
            }
            stk.push(c);
            visited.insert(c);
        }
        string res="";
        while(!stk.empty()){
            res=stk.top()+res;
            stk.pop();
        }
        return res;
    }
};