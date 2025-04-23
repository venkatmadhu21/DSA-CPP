#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s="the sky is blue";
    stringstream ss(s);
    vector<string> final;
    string word;
    while(ss >> word){
        final.push_back(word);
}
reverse(final.begin(),final.end());
string result="";
for(const auto&w : final){
    if(!result.empty()){
        result+=" ";
    }
    result+=w;
}
cout << result;
}
