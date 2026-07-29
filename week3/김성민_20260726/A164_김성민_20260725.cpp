#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
  vector<int> answer;
  int lastSeen[26];
  fill(lastSeen, lastSeen + 26, -1);

  for (int i = 0; i < s.size(); i++) {
    int idx = s[i] - 'a';
    if (lastSeen[idx] != -1) {
      answer.push_back(i - lastSeen[idx]);
    } else {
      answer.push_back(-1);
    }
    lastSeen[idx] = i;
  }

  return answer;
}

int main() {
  // 예제 1
  vector<int> result1 = solution("banana");
  for (int n : result1)
    cout << n << " ";
  cout << endl;

  // 예제 2
  vector<int> result2 = solution("foobar");
  for (int n : result2)
    cout << n << " ";
  cout << endl;

  return 0;
}