#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums={7,1,5,3,6,4};
    int profit=0;
    int n=nums.size();
    int mini=nums[0];
    for(int i=0;i<n;i++)
    {
        mini=min(mini,nums[i]);
        profit=max(profit,nums[i]-mini);
    }
    cout << profit;
}
