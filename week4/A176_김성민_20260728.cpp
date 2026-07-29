#include <iostream>

using namespace std;

int solution(int n) {
  for (int x = 2; x < n; x++)
    if (n % x == 1) return x;
  return n - 1;
}

int main() {
  // 예제 1: 3
  cout << solution(10) << endl;

  // 예제 2: 11
  cout << solution(12) << endl;

  return 0;
}