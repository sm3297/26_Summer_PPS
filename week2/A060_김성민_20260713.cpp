#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int> scores;
        for (const string& op : operations) {
            if (op == "C") {
                if (!scores.empty()) {
                    scores.pop_back(); 
                }
            } else if (op == "D") {
                if (!scores.empty()) {
                    scores.push_back(scores.back() * 2); 
                }
            } else if (op == "+") {
                if (scores.size() >= 2) {
                    scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]); // 마지막 두 스코어의 합 추가
                }
            } else {
                scores.push_back(stoi(op)); //스코어 추가
            }
        }

        int total = 0;
        for (int score : scores) {
            total += score; 
        }
        return total; 

    }
};

int main() {
    
    Solution solution;
    //vector<string> operations = {"5", "2", "C", "D", "+"};
    //vector<string> operations = {"5","-2","4","C","D","9","+","+"};
    vector<string> operations = {"1","C"};
    int result = solution.calPoints(operations);
    cout << result << endl; 

    return 0;
}