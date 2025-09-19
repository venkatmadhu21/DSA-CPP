class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        int i=0,j=0;
        string ika="";
        while(i<m && j < n){
            ika+=word1[i];
            ika+=word2[j];
            i++;j++;
        }
        while(i<m){
            ika+=word1[i];
            i++;
        }
        while(j<n){
            ika+=word2[j];
            j++;
        }
        return ika;
    }
};