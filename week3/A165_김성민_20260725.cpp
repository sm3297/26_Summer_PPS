#include <iostream>

using namespace std;

// 약수 개수 구하기
int countDivisors(int n) {
  int count = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      count++; // i는 약수
      if (i != n / i)
        count++; // n/i도 약수 (중복 제외)
    }
  }
  return count;
}

int solution(int number, int limit, int power) {
  int answer = 0;

  for (int i = 1; i <= number; i++) {
    int divisors = countDivisors(i);
    if (divisors > limit)
      answer += power;
    else
      answer += divisors;
  }

  return answer;
}

int main() {
  // 예제 1: 10
  cout << solution(5, 3, 2) << endl;

  // 예제 2: 21
  cout << solution(10, 3, 2) << endl;

  return 0;
}