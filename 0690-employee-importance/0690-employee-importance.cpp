/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
         unordered_map<int, Employee*> empMap;
        for (auto e : employees)
            empMap[e->id] = e;

        queue<int> q;
        q.push(id);
        int total = 0;

        while (!q.empty()) {
            int curId = q.front();
            q.pop();

            Employee* emp = empMap[curId];
            total += emp->importance;

            for (int sub : emp->subordinates)
                q.push(sub);
        }

        return total;
    }
};