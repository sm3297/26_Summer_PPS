#include <iostream>
#include <string>

using namespace std;

int solution(string t, string p) {
  int answer = 0;
  int len = p.size();
  long long pVal = stoll(p);

  for (int i = 0; i <= (int)t.size() - len; i++) {
    string sub = t.substr(i, len);
    if (stoll(sub) <= pVal)
      answer++;
  }

  return answer;
}

int main() {
  // 예제 1: 2
  cout << solution("3141592", "271") << endl;

  // 예제 2: 8
  cout << solution("500220839878", "7") << endl;

  // 예제 3: 3
  cout << solution("10203", "15") << endl;

  return 0;
}