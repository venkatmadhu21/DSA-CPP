class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        string res="";
        for(char c : s){
            if(!stk.empty() && stk.top() == c){
                stk.pop();
            }else{
                stk.push(c);
            }
        }
        char d;
        while(!stk.empty()){
            d=stk.top();
            res+=d;
            stk.pop();
        }
          reverse(res.begin() , res.end());
          return res;
    }
};