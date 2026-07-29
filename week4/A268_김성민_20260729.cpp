#include <iostream>

using namespace std;

int solution(int num1, int num2) {
  return num1 / num2;
}

int main() {
  // 예제 1: 2
  cout << solution(10, 5) << endl;

  // 예제 2: 3
  cout << solution(7, 2) << endl;

  return 0;
}