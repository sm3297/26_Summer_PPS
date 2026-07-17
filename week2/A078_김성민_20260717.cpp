#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int n = citations.size();
    vector<int> count(n + 1, 0);

    for (int citation : citations) {
        if (citation >= n) {
            count[n]++;
        } else {
            count[citation]++;
        }
    }
    int total = 0;
    for (int i = n; i >= 0; --i) {
        total += count[i];
        if (total >= i) {
            answer = i;
            break;
        }
    }
    return answer;
}

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    int result = solution(citations);
    return result;
}