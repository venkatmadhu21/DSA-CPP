class Solution {
public:
bool compute(string s , string word){
    int n= s.size() , m = word.size();
    int i=0,j=0;
    while(i < n && j < m){
        char ch = s[i];
        int cntS=0,cntW=0;
        if(s[i]!=word[j]) return false;
        while(i < n && s[i] == ch){
            cntS++;
            i++;
        }
        while(j < m && word[j]== ch ){
            cntW++;
            j++;
        }
        
        if (cntS < 3) {
            if (cntS != cntW) return false;
        } else {
            if (cntW > cntS) return false;
        }
    }
    return i == n && j== m;
}
int solve(string s , vector<string>&words){
     int cnt=0;
    for(string i : words){
       
        if(compute(s,i)) cnt++;
    }
    return cnt;
}
    int expressiveWords(string s, vector<string>& words) {
        return solve(s,words);
    }
};