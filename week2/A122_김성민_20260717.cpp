#include <iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length()) {
            return false; 
        }
    
        string doubledS = s + s; 
        return doubledS.find(goal) != string::npos;
        
    }
};

int main(){

    Solution solution;
    string s = "abcde";
    // string goal = "cdeab";
    string goal = "abced";

    bool result = solution.rotateString(s, goal);
    
    if (result)
        cout << "true" << endl;
    else 
        cout << "false" << endl;

    return 0;
}
