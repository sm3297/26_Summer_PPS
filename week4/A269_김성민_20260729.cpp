#include <iostream>

using namespace std;

int solution(int num1, int num2) {
  return num1 % num2;
}

int main() {
  // 예제 1: 1
  cout << solution(3, 2) << endl;

  // 예제 2: 0
  cout << solution(10, 5) << endl;

  return 0;
}