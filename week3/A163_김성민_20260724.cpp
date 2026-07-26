#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int toDays(int year, int month, int day) {
  return (year * 12 + month) * 28 + day;
}

int parseDate(const string &date) {
  int year = stoi(date.substr(0, 4));
  int month = stoi(date.substr(5, 2));
  int day = stoi(date.substr(8, 2));
  return toDays(year, month, day);
}

vector<int> solution(string today, vector<string> terms,
                     vector<string> privacies) {
  vector<int> answer;

  int todayDays = parseDate(today);

  map<char, int> termMap;
  for (const string &t : terms) {
    char type = t[0];
    int period = stoi(t.substr(2));
    termMap[type] = period;
  }

  for (int i = 0; i < privacies.size(); i++) {
    string date = privacies[i].substr(0, 10);
    char type = privacies[i][11];

    int collectedDays = parseDate(date);
    int expiryDays = collectedDays + termMap[type] * 28;

    if (todayDays >= expiryDays) {
      answer.push_back(i + 1);
    }
  }

  return answer;
}

int main() {
  // 예제 1: [1, 3]
  vector<int> result1 = solution(
      "2022.05.19", {"A 6", "B 12", "C 3"},
      {"2021.05.02 A", "2021.07.01 B", "2022.02.19 C", "2022.02.20 C"});
  for (int n : result1)
    cout << n << " ";
  cout << endl;

  // 예제 2: [1, 4, 5]
  vector<int> result2 =
      solution("2020.01.01", {"Z 3", "D 5"},
               {"2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D",
                "2018.12.28 Z"});
  for (int n : result2)
    cout << n << " ";
  cout << endl;

  return 0;
}
