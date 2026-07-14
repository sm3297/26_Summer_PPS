#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int dayOfYear(string date) {
        
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int daysInMonth[] = {31, (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int dayOfYear = day;
        for (int i = 0; i < month - 1; ++i) {
            dayOfYear += daysInMonth[i];
        }

        return dayOfYear;

    }
};

int main(){

    Solution solution;
    //string date = "2019-01-09";
    string date = "2019-02-10";
    int result = solution.dayOfYear(date);
    cout << result << endl; 
    return 0;

}