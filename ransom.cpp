class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> hash;
        for(char c : magazine){
            hash[c]++;
        }
        for(char c: ransomNote){
            if(hash[c]>0){
                hash[c]--;
            }else{
               return false;
            }
        }
        return true;
    }
};
