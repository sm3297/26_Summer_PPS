#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
  string left = "";

  // food[0]은 물이므로 1번부터 시작
  for (int i = 1; i < food.size(); i++) {
    int count = food[i] / 2; // 각 선수가 먹을 수 있는 개수
    for (int j = 0; j < count; j++) {
      left += to_string(i);
    }
  }

  string right = left;
  reverse(right.begin(), right.end());

  return left + "0" + right;
}

int main() {
  // 예제 1: "1223330333221"
  cout << solution({1, 3, 4, 6}) << endl;

  // 예제 2: "111303111"
  cout << solution({1, 7, 1, 2}) << endl;

  return 0;
}