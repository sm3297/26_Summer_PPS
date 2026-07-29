#include <iostream>

using namespace std;

int solution(int num1, int num2) {
  return num1 * num2;
}

int main() {
  // 예제 1: 12
  cout << solution(3, 4) << endl;

  // 예제 2: 513
  cout << solution(27, 19) << endl;

  return 0;
}