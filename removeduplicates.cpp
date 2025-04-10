#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> nums;
    int arr[]={1,3,5,45,6,5,4,3,3,5,6,2,1,1,3};
    for(int i : arr)
    {
        nums.insert(i);
    }
    for(int i : nums)
    {
        cout << i << "\n";
    }
}
