#include <iostream>

using namespace std;

int solution(int num1, int num2) {
  return num1 - num2;
}

int main() {
  // 예제 1: -1
  cout << solution(2, 3) << endl;

  // 예제 2: 98
  cout << solution(100, 2) << endl;

  return 0;
}