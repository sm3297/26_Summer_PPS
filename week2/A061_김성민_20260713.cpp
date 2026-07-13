#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string result;
        while (columnNumber > 0) {
            columnNumber--; 
            char ch = 'A' + (columnNumber % 26); // 현재 자리의 문자 계산
            result = ch + result; 
            columnNumber /= 26; 
        }
        return result;

    }
};

int main() {
    Solution solution;
    //int columnNumber = 1;
    //int columnNumber = 28;
    int columnNumber = 701;
    string result = solution.convertToTitle(columnNumber);
    cout << result << endl; 
    return 0;
}