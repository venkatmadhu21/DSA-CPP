class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> dicti;
        stack<int> stk;
        for(int num : nums2){
            while(!stk.empty() && num > stk.top()){
                dicti[stk.top()]=num;
                stk.pop();
            }
            stk.push(num);
        }
        while(!stk.empty()){
            dicti[stk.top()]=-1;
            stk.pop();
        }
        vector<int> result;
        for(int num: nums1){
            result.push_back(dicti[num]);
        }
        return result;
    }
};