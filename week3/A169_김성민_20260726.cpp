#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
  int answer = 0;
  vector<int> stack;

  for (int item : ingredient) {
    stack.push_back(item);

    // 스택 상위 4개가 빵(1)-야채(2)-고기(3)-빵(1)이면 포장
    int sz = stack.size();
    if (sz >= 4 && stack[sz - 4] == 1 && stack[sz - 3] == 2 &&
        stack[sz - 2] == 3 && stack[sz - 1] == 1) {
      stack.erase(stack.end() - 4, stack.end());
      answer++;
    }
  }

  return answer;
}

int main() {
  // 예제 1: 2
  cout << solution({2, 1, 1, 2, 3, 1, 2, 3, 1}) << endl;

  // 예제 2: 0
  cout << solution({1, 3, 2, 1, 2, 1, 3, 1, 2}) << endl;

  return 0;
}
