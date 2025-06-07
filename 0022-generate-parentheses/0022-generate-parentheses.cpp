class Solution {
public:
    void backward(vector<string>&result,string current , int open , int close , int n){
        if(current.length() == 2*n){
            result.push_back(current);
            return;
        }if(open < n){
            backward(result,current + '(',open + 1,close,n);
        }if(close < open){
            backward(result,current + ')',open,close+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backward(result,"",0,0,n);
        return result;
    }
};