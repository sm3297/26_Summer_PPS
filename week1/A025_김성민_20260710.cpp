#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if (n <= 0) return false;
        if ((n & (n - 1)) != 0) return false; 
        return (n - 1) % 3 == 0; 
    }
};

int main() {
    Solution solution;
    //int n = 16;
    //int n = 5;
    int n = 1;

    cout << (solution.isPowerOfFour(n) ? "true" : "false") << endl;
    
    return 0;
}