#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
  int answer = 45; // 0+1+2+...+9 = 45

  for (int num : numbers)
    answer -= num;

  return answer;
}

int main() {
  // 예제 1: 14
  cout << solution({1, 2, 3, 4, 6, 7, 8, 0}) << endl;

  // 예제 2: 6
  cout << solution({5, 8, 4, 0, 6, 7, 9}) << endl;

  return 0;
}
