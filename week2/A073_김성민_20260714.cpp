#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                result.push_back("Fizz");
            } else if (i % 5 == 0) {
                result.push_back("Buzz");
            } else {
                result.push_back(to_string(i));
            }
        }
        return result;

    }
};

int main(){
    Solution solution;
    //int n = 3;
    //int n = 5;
    int n = 15;
    vector<string> result = solution.fizzBuzz(n);
    
    cout << "[";
    for (const string& str : result) {
        cout << "\""<< str << "\"" << ",";
        if(str == result.back()) {
            cout << "\b"; 
        }
    }
    cout << "]" << endl;

    return 0;
}