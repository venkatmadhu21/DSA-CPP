#include<iostream>
#include<vector>
using namespace std;
int Tripets(vector<int> &nums)
{
	int n=nums.size();
	int first=INT_MAX;
	int second=INT_MAX;
	for(int i:nums)
	{
		if(nums[i]<first)
		{
			first=nums[i];
		}
		else if (nums[i]<second)
		{
			second=nums[i];
		}
		else
		{
			return true;
		}
	}
}
