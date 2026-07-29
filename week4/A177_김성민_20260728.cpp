#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
  int maxW = 0, maxH = 0;

  for (auto& card : sizes) {
    int big = max(card[0], card[1]);
    int small_ = min(card[0], card[1]);
    maxW = max(maxW, big);
    maxH = max(maxH, small_);
  }

  return maxW * maxH;
}

int main() {
  // 예제 1: 4000
  cout << solution({{60,50},{30,70},{60,30},{80,40}}) << endl;

  // 예제 2: 120
  cout << solution({{10,7},{12,3},{8,15},{14,7},{5,15}}) << endl;

  // 예제 3: 133
  cout << solution({{14,4},{19,6},{6,16},{18,7},{7,11}}) << endl;

  return 0;
}