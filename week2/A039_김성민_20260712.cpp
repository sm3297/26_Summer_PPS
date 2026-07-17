#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {

        if (num < 0) return false; 
        if (num == 0 || num == 1) return true; 

        long long left = 2, right = num / 2; 
        while (left <= right) {
            long long mid = left + (right - left) / 2; 
            long long square = mid * mid; 

            if (square == num) {
                return true; 
            } else if (square < num) {
                left = mid + 1;
            } else {
                right = mid - 1; 
            }
        }

        return false; 

    }
};

int main() {
    Solution solution;
    //int num = 16;
    int num = 14;

    bool result = solution.isPerfectSquare(num);
    cout << (result ? "true" : "false") << endl;

    return 0;
}