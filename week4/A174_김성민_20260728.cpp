#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
  vector<int> answer;
  vector<int> hall;

  for (int s : score) {
    hall.push_back(s);
    sort(hall.begin(), hall.end(), greater<int>());

    if (hall.size() > k)
      hall.pop_back();

    answer.push_back(hall.back());
  }

  return answer;
}

int main() {
  // 예제 1: [10, 10, 10, 20, 20, 100, 100]
  for (int x : solution(3, {10, 100, 20, 150, 1, 100, 200}))
    cout << x << " ";
  cout << endl;

  // 예제 2: [0, 0, 0, 0, 20, 40, 70, 70, 150, 300]
  for (int x : solution(4, {0, 300, 40, 300, 20, 70, 150, 50, 500, 1000}))
    cout << x << " ";
  cout << endl;

  return 0;
}