class Solution {
public:
    bool div(vector<int>& candies,long long k , long long n){
        long long  cnt=0;
        for(int i : candies){
            cnt+= i /n;
        }
        return cnt >=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long  low =1; long long  high=*max_element(candies.begin(),candies.end()); int ans=0;
        while(low<=high){
            long long  mid=low + (high-low)/2;
            if(div(candies,k,mid)) {
                ans= mid;
                low=mid +1;
        }else{
            high=mid-1;
        }
        }
        return ans;
    }
};