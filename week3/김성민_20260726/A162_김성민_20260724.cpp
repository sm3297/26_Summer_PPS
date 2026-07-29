#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2,
                vector<string> goal) {
  int idx1 = 0;
  int idx2 = 0;

  string answer = "Yes";

  for (const string &word : goal) {

    if (idx1 < cards1.size() && cards1[idx1] == word) {
      idx1++;
    } else if (idx2 < cards2.size() && cards2[idx2] == word) {
      idx2++;
    } else {
      answer = "No";
      break;
    }
  }

  return answer;
}

int main() {
  // 예제 1: "Yes"
  vector<string> cards1_1 = {"i", "drink", "water"};
  vector<string> cards2_1 = {"want", "to"};
  vector<string> goal_1 = {"i", "want", "to", "drink", "water"};
  cout << solution(cards1_1, cards2_1, goal_1) << endl;

  // 예제 2: "No"
  vector<string> cards1_2 = {"i", "water", "drink"};
  vector<string> cards2_2 = {"want", "to"};
  vector<string> goal_2 = {"i", "want", "to", "drink", "water"};
  cout << solution(cards1_2, cards2_2, goal_2) << endl;

  return 0;
}