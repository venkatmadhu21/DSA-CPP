class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char mapS[256]={0};
        char mapT[256]={0};
        for(int i=0;i<s.size();i++){
            if(mapS[s[i]]==0 && mapT[t[i]]==0){
                mapS[s[i]]=t[i];
                mapT[t[i]]=s[i];
            }
            else{
                if(mapS[s[i]]!=t[i] || mapT[t[i]]!=s[i]){
                    return false;
                }
            }
          }
          return true;
    }
};
