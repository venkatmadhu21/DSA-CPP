#include <iostream>
#include <string>
using namespace std;

string removeDup(string word) {
    int num = word.size();
    string result = "";

    for (int i = 0; i < num; i++) {
        if (i < num - 1 && word[i] == word[i + 1]) {
            // Skip all adjacent duplicates
            while (i < num - 1 && word[i] == word[i + 1]) {
                i++;
            }
        } else {
            result += word[i];
        }
    }

    // Base case: if no more duplicates
    if (result == word) {
        return result;
    } else {
        return removeDup(result); // Recursive call
    }
}

int main() {
    string s = "abccbccba";
    string final = removeDup(s);
    cout << "Final Result: " << final << endl;
    return 0;
}

