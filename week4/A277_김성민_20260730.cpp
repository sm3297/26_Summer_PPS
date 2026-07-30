#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int findCenter(vector<vector<int>> &edges) {
    if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
      return edges[0][0];
    return edges[0][1];
  }
};

int main() {
  Solution sol;

  // 예제 1: 2
  vector<vector<int>> edges1 = {{1, 2}, {2, 3}, {4, 2}};
  cout << sol.findCenter(edges1) << endl;

  // 예제 2: 1
  vector<vector<int>> edges2 = {{1, 2}, {5, 1}, {1, 3}, {1, 4}};
  cout << sol.findCenter(edges2) << endl;

  return 0;
}