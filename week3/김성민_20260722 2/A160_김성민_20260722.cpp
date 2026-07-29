#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
  int answer = 0;

  int i = 0;
  while (i < section.size()) {
    answer++; // 롤러 사용 횟수 증가

    int current_section = section[i];
    while (i < section.size() && section[i] < current_section + m) {
      i++;
    }
  }

  return answer;
}

int main() {
  // int n = 8, m = 2;
  int n = 5, m = 4;
  // vector<int> section = {2, 3, 6, 7};
  vector<int> section = {1, 3};
  cout << solution(n, m, section) << endl;

  return 0;
}