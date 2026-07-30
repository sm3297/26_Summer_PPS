#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
  vector<int> answer;
  for (int i = 0; i < numbers.size(); i++) {
    answer.push_back(numbers[i] * 2);
  }
  return answer;
}

int main() {
  // 예제 1: [2, 4, 6, 8, 10]
  vector<int> numbers1 = {1, 2, 3, 4, 5};
  vector<int> result1 = solution(numbers1);
  for (int i = 0; i < result1.size(); i++) {
    cout << result1[i] << " ";
  }
  cout << endl;

  // 예제 2: [2, 4, 200, -198, 2, 4, 6]
  vector<int> numbers2 = {1, 2, 100, -99, 1, 2, 3};
  vector<int> result2 = solution(numbers2);
  for (int i = 0; i < result2.size(); i++) {
    cout << result2[i] << " ";
  }
  cout << endl;

  return 0;
}