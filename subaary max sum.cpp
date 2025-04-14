#include<iostream>
#include<vector>
using namespace std;
int subarray(vector<int>&nums)
{
	int sum=0;
	int maxi=nums[0];
	for(int i : nums){
		sum+=i;
		maxi=max(maxi,sum);
		if(sum < 0){
		  maxi=0;
		}

}
return maxi;
}
