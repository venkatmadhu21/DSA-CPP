class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int> merged;
        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }else{
                merged.push_back(nums2[j]);
                j++;
            }
        }
            while(i<m){
                merged.push_back(nums1[i]);
                i++;
            }while(j < n){
                merged.push_back(nums2[j]);
                j++;
            }
            for(int k=0;k<m+n;k++){
                nums1[k]=merged[k];
            }
    
    
    }
};