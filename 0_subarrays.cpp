#include<vector>
#include<iostream>
using namespace std;
int Zero_sub(vector<int> &nums)
{
	int count,streak=0;
	int n=nums.size();
	for(int i:nums)
	{
		if(nums==0)
		{
			streak++;
			count=count + streak;
		}
		else
		{
			streak=0;
		}
	}
}
