class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>ika;
       for(char c : s){
        if(c=='('){
            ika.push(c);
        }else{
            if(!ika.empty() && ika.top()=='('){
                ika.pop();
            }else{
                ika.push(c);
            }
        }
        
       }
        return ika.size();
       
    }
};