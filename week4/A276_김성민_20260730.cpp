#include <iostream>

using namespace std;

class Solution {
public:
  int numberOfMatches(int n) {
    int matches = 0;
    while (n > 1) {
      matches += n / 2;
      n = (n % 2 == 0) ? n / 2 : n / 2 + 1;
    }
    return matches;
  }
};

int main() {
  Solution sol;

  // 예제 1: 6
  cout << sol.numberOfMatches(7) << endl;

  // 예제 2: 13
  cout << sol.numberOfMatches(14) << endl;

  return 0;
}