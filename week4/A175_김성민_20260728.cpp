#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
  int answer = 0;
  string sounds[] = {"aya", "ye", "woo", "ma"};

  for (const string& word : babbling) {
    string prev = "";
    string remaining = word;
    bool valid = true;

    while (!remaining.empty()) {
      bool matched = false;
      for (const string& s : sounds) {
        if (remaining.substr(0, s.size()) == s && s != prev) {
          prev = s;
          remaining = remaining.substr(s.size());
          matched = true;
          break;
        }
      }
      if (!matched) {
        valid = false;
        break;
      }
    }

    if (valid) answer++;
  }

  return answer;
}

int main() {
  // 예제 1: 1
  cout << solution({"aya", "yee", "u", "maa"}) << endl;

  // 예제 2: 2
  cout << solution({"ayaye", "uuu", "yeye", "yemawoo", "ayaayaa"}) << endl;

  return 0;
}