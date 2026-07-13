#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    vector<double> failureRates(N, 0.0);
    vector<int> stageCounts(N + 1, 0);
    int totalPlayers = stages.size();

    for (int stage : stages) {
        if (stage <= N) {
            stageCounts[stage - 1]++;
        }
    }

    for (int i = 0; i < N; i++) {
        if (totalPlayers > 0) {
            failureRates[i] = static_cast<double>(stageCounts[i]) / totalPlayers;
        } else {
            failureRates[i] = 0.0;
        }
        totalPlayers -= stageCounts[i];
    }
    vector<pair<double, int>> stageFailurePairs;

    for (int i = 0; i < N; i++) {
        stageFailurePairs.push_back({failureRates[i], i + 1});
    }

    sort(stageFailurePairs.begin(), stageFailurePairs.end(), [](const pair<double, int>& a, const pair<double, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second; // 실패율이 같으면 스테이지 번호가 작은 순서로
        }
        return a.first > b.first; // 실패율이 높은 순서로
    });

    for (const auto& pair : stageFailurePairs) {
        answer.push_back(pair.second);
    }
    return answer;
}

int main() {
    int N = 5;
    vector<int> stages = {2, 1, 2, 6, 2, 4, 3, 3};

    vector<int> result = solution(N, stages);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

