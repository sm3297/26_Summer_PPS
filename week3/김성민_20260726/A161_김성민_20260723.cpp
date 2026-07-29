#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    // 각 문자를 입력하기 위한 최소 누름 횟수를 저장
    unordered_map<char, int> minPress;

    for (const string& key : keymap) {
        for (int i = 0; i < key.size(); i++) {
            char c = key[i];
            int press = i + 1; // i번 인덱스 → (i+1)번 누름
            if (minPress.find(c) == minPress.end() || press < minPress[c]) {
                minPress[c] = press;
            }
        }
    }

    vector<int> answer;
    for (const string& target : targets) {
        int total = 0;
        bool possible = true;
        for (char c : target) {
            if (minPress.find(c) == minPress.end()) {
                possible = false;
                break;
            }
            total += minPress[c];
        }
        answer.push_back(possible ? total : -1);
    }
    return answer;
}
