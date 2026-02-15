class Solution {
public:
   bool compute(string temp,string s){
    int t = stoi(temp);
    int e = stoi(s);
    if(t==0 || e ==0) return false; 
    if(e%t==0) return true;
    return false;
}
 int divisorSubstrings(int num, int k) {
     string s= to_string(num);
    int cnt=0;
    int n=s.size();
    string temp;
    for(int i = 0;i<k;i++){
        temp+=s[i];
    }
    if(compute(temp,s)) cnt++;
    for(int i=k;i<n;i++){
        temp+=s[i];
        temp.erase(temp.begin());
        if(compute(temp,s)) cnt++;
    }
    return cnt;
}
};
