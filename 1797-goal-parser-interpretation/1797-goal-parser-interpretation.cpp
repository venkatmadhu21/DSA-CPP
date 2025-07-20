class Solution {
public:
    string interpret(string command) {
          string res;
          int i=0;
          while(i<command.size()){
            if(command[i]=='G'){
                res+='G';
                i++;
            }else if (command[i]=='('){
                if(command[i+1]==')'){
                    res+='o';
                    i+=2;
                }else if (command[i+1]=='a' && command[i+2]=='l'){
                    res+="al";
                    i+=4;
                }
            }
          }  
          return res;
    }
};