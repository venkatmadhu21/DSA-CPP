class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> final;
        for(auto& it:text){
            final[ it]++;  
        }
                   return min({final['b'],final['a'],final['l']/2,final['o']/2,final['n']});
 
    }
};
