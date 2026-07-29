#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
  vector<int> fib(n + 1);
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i <= n; i++)
    fib[i] = (fib[i - 1] + fib[i - 2]) % 1234567;

  return fib[n];
}

int main() {
  // 예제 1: 2
  cout << solution(3) << endl;

  // 예제 2: 5
  cout << solution(5) << endl;

  return 0;
}