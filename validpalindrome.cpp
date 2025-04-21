#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool ispalindrome(string s)
{
    string fil="";
    for(char i : s){
        if(isalnum(i)){
            fil+=tolower(i);
        }
    }
    //cout << fil << '\n';
    int left=0;
    int right=fil.size() - 1;
    while(left < right){
        if(fil[left]!=fil[right])
        {
            return false;
            break;
        }
        right--;
        left++;
    }
    return true;
}

