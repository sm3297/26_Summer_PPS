#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";

    bool isFirstChar = true; 
    for (char c : s) {
        if (c == ' ') {
            answer += c;
            isFirstChar = true;
        } else {
            if (isFirstChar) {
                answer += toupper(c); 
                isFirstChar = false;
            } else {
                answer += tolower(c); 
            }
        }
    }
    if (!answer.empty() && answer.back() == ' ') {
        answer.pop_back(); 
    }

    size_t start = answer.find_first_not_of(' ');

    size_t end = answer.find_last_not_of(' ');

    if (start == string::npos || end == string::npos) {
        answer = ""; 
    } else {
        answer = answer.substr(start, end - start + 1);
    }

    return answer;
}


int main() {
    string s1 = "3people unFollowed me";
    string s2 = "for the last week";

    cout << solution(s1) << endl; 
    cout << solution(s2) << endl; 

    return 0;
}