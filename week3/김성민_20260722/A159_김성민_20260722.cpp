#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
  int min_r = 51, min_c = 51;
  int max_r = -1, max_c = -1; // 최댓값을 구하기 위해 초깃값은 -1로 설정

  for (int i = 0; i < wallpaper.size(); i++) {
    for (int j = 0; j < wallpaper[i].length(); j++) {
      if (wallpaper[i][j] == '#') {
        min_r = min(min_r, i);
        min_c = min(min_c, j); // 가장 왼쪽 파일의 열
        max_r = max(max_r, i);
        max_c = max(max_c, j); // 가장 오른쪽 파일의 열
      }
    }
  }

  return {min_r, min_c, max_r + 1, max_c + 1};
}

int main() {
  vector<string> wallpaper = {".#...", "..#..", "...#."};

  vector<int> result = solution(wallpaper);

  for (int r : result) {
    cout << r << " ";
  }
  cout << endl;

  return 0;
}