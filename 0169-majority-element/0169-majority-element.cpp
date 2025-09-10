class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0,count=0;
        for(int ele : nums){
            if(count ==0) candidate = ele;
            if(ele == candidate) count ++;
            else count-- ;
        }
        return candidate;
    }
};