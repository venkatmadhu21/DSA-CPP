class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
    int l = 0;
    int r = n -1;
    int maxi = INT_MIN;
    while(l < r){
        int h  = min(height[l],height[r]);
        int w = abs(r-l);
        int area = h * w;
        maxi = max(maxi,area);
        if(height[l] < height[r])l++;
        else r--;
    }
    return maxi;
    }
};