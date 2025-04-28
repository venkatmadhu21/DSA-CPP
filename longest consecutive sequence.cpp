class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    	int n=nums.size();
    	int l=INT_MIN;
    	int lon=1;
    	int cnt=0;
    	sort(nums.begin(),nums.end());
    	for(int i=0;i<n;i++){
    		if(nums[i]-1==l){
    			cnt++;
    			l=nums[i];
			}
			else if(nums[i]!=l){
				cnt=1;
				l=nums[i];
			}
			lon=max(lon,cnt);
}
	return lon;	
	}
