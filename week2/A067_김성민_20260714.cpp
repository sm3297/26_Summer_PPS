#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        
        string result;
        for (char c : s) {
            if (!result.empty() && result.back() == c) {
                result.pop_back(); 
            } else {
                result.push_back(c); 
            }
        }
        return result;

    }
};

int main() {
    Solution solution;
    //string s = "abbaca"; 
    string s = "azxxzy"; 
    string result = solution.removeDuplicates(s);
    cout << result << endl;
    return 0;
}