#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> move_zeros(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> move_zeros[i];
    }
    int cnt = 0;
    for (auto it = move_zeros.begin(); it != move_zeros.end(); ) {
        if (*it == 0) {
            it = move_zeros.erase(it);
            cnt++;
        } else {
            ++it;
        }
    }
    for (int i = 0; i < cnt; i++) {
        move_zeros.push_back(0);
    }
    for (int val : move_zeros) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
