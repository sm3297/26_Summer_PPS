#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> A, vector<int> B) {
  int answer = 0;

  // A 배열은 오름차순 정렬
  sort(A.begin(), A.end());
  // B 배열은 내림차순 정렬
  sort(B.rbegin(), B.rend());

  // 두 배열의 원소를 순서대로 곱해서 누적
  for (int i = 0; i < A.size(); i++) {
    answer += A[i] * B[i];
  }

  return answer;
}

int main() {
  // vector<int> A = {1, 4, 2};
  // vector<int> B = {5, 4, 4};

  vector<int> A = {1, 2};
  vector<int> B = {3, 4};

  cout << solution(A, B) << endl;
}