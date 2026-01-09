class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int a = 1;
        int b=2,way;
        for(int i =3;i<=n;i++){
            way = a+b;
            a=b;
            b=way;
        }
        return b;
    }
};