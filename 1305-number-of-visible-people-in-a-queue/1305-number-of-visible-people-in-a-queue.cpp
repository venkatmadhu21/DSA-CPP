class Solution {
public:
   vector<int> canSeePersonsCount(vector<int>& heights) {
    int n=heights.size();
    stack<int> stk;
    vector<int> answer(n,0);
    for(int i=n-1;i>=0;i--){
        int count=0;
        while(!stk.empty() && heights[i]>stk.top()){
            stk.pop();
            count++;
        }
        if(!stk.empty()){
            count++;
        }
        answer[i]=count;
        stk.push(heights[i]);
    }   
    return answer;
}
};