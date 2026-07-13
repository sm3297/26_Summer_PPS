#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        
        if (num == 0) return 0;
        return 1 + (num - 1) % 9; 
    }
};

int main() {
    Solution solution;
    cout << solution.addDigits(38) << endl; 
    cout << solution.addDigits(0) << endl; 

    return 0;
}