#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
  int answer = 0;

  while (n >= a) {
    int exchange = (n / a) * b; // 받는 콜라 수
    n = n % a + exchange;       // 남은 빈 병 + 새로 받은 병
    answer += exchange;
  }

  return answer;
}

int main() {
  // 예제 1: 19
  cout << solution(2, 1, 20) << endl;

  // 예제 2: 9
  cout << solution(3, 1, 20) << endl;

  return 0;
}
