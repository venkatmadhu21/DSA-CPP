class Solution {
public:
    int calculate(string s) {
        int num=0;
        char op='+';
        int n=s.size();
        stack<int> stk;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(isdigit(c)){
                num=num * 10 +(c-'0');
            }
        if((!isdigit(c) && c!=' ')|| i==n-1){
            if(op=='+'){
                stk.push(num);
            }
            else if (op=='-'){
                stk.push(-num);
            }else if (op=='*'){
                int top=stk.top();
                stk.pop();
                stk.push(top*num);
            }else if (op=='/'){
                int top=stk.top();
                stk.pop();
                stk.push(top/num);
            }
            op=c;
              num=0;
        }
        }
        int res=0;
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        return res;
    }
};