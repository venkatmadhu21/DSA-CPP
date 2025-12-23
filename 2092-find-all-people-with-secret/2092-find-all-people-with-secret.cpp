class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<bool> knows(n, false);
        knows[0] = knows[firstPerson] = true;
        
        // Sort meetings by time
        sort(meetings.begin(), meetings.end(),
             [](auto &a, auto &b) {
                 return a[2] < b[2];
             });
        
        int m = meetings.size();
        int i = 0;
        
        while (i < m) {
            int time = meetings[i][2];
            
            // DSU for this time block
            unordered_map<int, int> parent;
            
            function<int(int)> find = [&](int x) {
                if (parent[x] == x) return x;
                return parent[x] = find(parent[x]);
            };
            
            auto unite = [&](int a, int b) {
                a = find(a);
                b = find(b);
                if (a != b) parent[b] = a;
            };
            
            vector<int> people;
            int j = i;
            
            // Collect all meetings at same time
            while (j < m && meetings[j][2] == time) {
                int x = meetings[j][0];
                int y = meetings[j][1];
                
                if (!parent.count(x)) parent[x] = x;
                if (!parent.count(y)) parent[y] = y;
                
                unite(x, y);
                
                people.push_back(x);
                people.push_back(y);
                j++;
            }
            
            // Track components that already know the secret
            unordered_set<int> secretComponents;
            for (int p : people) {
                if (knows[p]) {
                    secretComponents.insert(find(p));
                }
            }
            
            // Spread secret within those components
            for (int p : people) {
                if (secretComponents.count(find(p))) {
                    knows[p] = true;
                }
            }
            
            i = j;
        }
        
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (knows[i]) result.push_back(i);
        }
        
        return result;
    }
};
