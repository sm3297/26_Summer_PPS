#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    sort(people.begin(), people.end()); 
    int left = 0;
    int right = people.size() - 1;

    while (left <= right) {
        if (people[left] + people[right] <= limit) {
            left++;
        }
        right--;
        answer++;
    }

    return answer;
}

int main() {
    //vector<int> people = {70, 50, 80, 50};
    vector<int> people = {70, 80, 50};
    int limit = 100;

    int result = solution(people, limit);
    cout << result << endl;

    return 0;
}

