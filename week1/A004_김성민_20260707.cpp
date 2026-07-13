#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int num : arr) {
        if (num % divisor == 0) {
            answer.push_back(num);
        }
    }

    if (answer.empty()) {
        answer.push_back(-1);
    }

    sort(answer.begin(), answer.end());  

    return answer;
}

int main() {
    vector<int> arr = {5, 9, 7, 10};

    int divisor = 5;

    vector<int> result = solution(arr, divisor);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
