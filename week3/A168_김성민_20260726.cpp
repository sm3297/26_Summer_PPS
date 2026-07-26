#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
  int answer = 0;

  // 내림차순 정렬
  sort(score.begin(), score.end(), greater<int>());

  // m개씩 묶어서 상자 만들기
  for (int i = m - 1; i < (int)score.size(); i += m) {
    // 각 상자의 최저 점수(마지막 원소) * m
    answer += score[i] * m;
  }

  return answer;
}

int main() {
  // 예제 1: 8
  cout << solution(3, 4, {1, 2, 3, 1, 2, 3, 1}) << endl;

  // 예제 2: 33
  cout << solution(4, 3, {4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2}) << endl;

  return 0;
}
