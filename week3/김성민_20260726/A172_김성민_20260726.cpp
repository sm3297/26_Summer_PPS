#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> number) {
  int answer = 0;
  int n = number.size();

  for (int i = 0; i < n - 2; i++)
    for (int j = i + 1; j < n - 1; j++)
      for (int k = j + 1; k < n; k++)
        if (number[i] + number[j] + number[k] == 0)
          answer++;

  return answer;
}

int main() {
  // 예제 1: 2
  cout << solution({-2, 3, 0, 2, -5}) << endl;

  // 예제 2: 5
  cout << solution({-3, -2, -1, 0, 1, 2, 3}) << endl;

  // 예제 3: 0
  cout << solution({-1, 1, -1, 1}) << endl;

  return 0;
}
