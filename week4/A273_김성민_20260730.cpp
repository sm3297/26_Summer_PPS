#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string restoreString(string s, vector<int> &indices) {
    string result(s.size(), ' ');
    for (int i = 0; i < s.size(); i++) {
      result[indices[i]] = s[i];
    }
    return result;
  }
};

int main() {
  Solution sol;

  // 예제 1: "leetcode"
  vector<int> indices1 = {4, 5, 6, 7, 0, 2, 1, 3};
  cout << sol.restoreString("codeleet", indices1) << endl;

  // 예제 2: "abc"
  vector<int> indices2 = {0, 1, 2};
  cout << sol.restoreString("abc", indices2) << endl;

  return 0;
}