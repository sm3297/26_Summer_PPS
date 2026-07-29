#include <iostream>

using namespace std;

int solution(int num1, int num2) {
  return num1 == num2 ? 1 : -1;
}

int main() {
  cout << solution(2, 3) << endl;    // -1
  cout << solution(11, 11) << endl;  // 1
  cout << solution(7, 99) << endl;   // -1
  return 0;
}