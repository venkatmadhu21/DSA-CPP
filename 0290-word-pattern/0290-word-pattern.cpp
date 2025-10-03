class Solution {
public:
    bool wordPattern(string pattern, string s) {
       vector<string> word;
       stringstream ss(s);
       unordered_map<char,string>patoword;
       unordered_map<string,char>wordtopat;
       string w;
       while(ss >> w) {
        word.push_back(w);
       }
       if(pattern.size()!=word.size()) return false;
        for(int i=0;i<word.size();i++){
            char c = pattern[i];
            string w=word[i];

            if(patoword.count(c) && patoword[c]!=w)return false;
            if(wordtopat.count(w) && wordtopat[w]!=c) return false;

            patoword[c]=w;
            wordtopat[w]=c;
        }
        return true;
    }
};