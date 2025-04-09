//MAJORITY ELEMENTS {BRUTE} 

#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            cout << nums[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}
//OPTIMAL APPROACH
#include<vector>
using namespace std;
int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    int count=0;
    int candidate=0;
    for(int num : nums)
    {
    if(count ==0)
    {
        candidate=num;
    }
    count+=(num==candidate)? 1 : -1;
}
cout << candidate;
}
