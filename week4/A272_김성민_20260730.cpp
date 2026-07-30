#include <iostream>

using namespace std;

int solution(int number, int n, int m) {
  if (number % n == 0 && number % m == 0) {
    return 1;
  }
  return 0;
}

int main() {
  // 예제 1: 1
  cout << solution(60, 2, 3) << endl;

  // 예제 2: 0
  cout << solution(55, 10, 5) << endl;

  return 0;
}