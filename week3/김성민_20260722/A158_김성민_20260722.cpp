#include <iostream>
#include <vector>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
  unordered_map<string, int> player_rank;
  unordered_map<int, string> rank_player;

  for (int i = 0; i < players.size(); i++) {
    player_rank[players[i]] = i;
    rank_player[i] = players[i];
  }

  for (const string &name : callings) {
    int rank = player_rank[name];                // 현재 등수
    string front_player = rank_player[rank - 1]; // 앞사람 이름

    player_rank[name] = rank - 1;
    player_rank[front_player] = rank;

    rank_player[rank - 1] = name;
    rank_player[rank] = front_player;
  }

  return players;
}

int main() {
  vector<string> players = {"mumu", "soe", "poe", "kai", "mine"};
  vector<string> callings = {"kai", "kai", "mine", "mine"};

  vector<string> result = solution(players, callings);

  for (const string &name : result) {
    cout << name << " ";
  }
  cout << endl;

  return 0;
}