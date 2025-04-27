#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	vector<int> answer (n,1);
	int left=1;
	for(int i=0;i<n;i++){
		answer[i]=left;
		left*=nums[i];
	}
	int right=1;
	for(int i=n-1;i>0;i--){
		answer[i]=right;
		right*=nums[i];
	}
	cout << answer;
}
