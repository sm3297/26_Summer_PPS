#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        
        if (x < 2) return x; 

        int left = 2, right = x / 2, ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long square = static_cast<long long>(mid) * mid; 

            if (square == x) {
                return mid; 
            } else if (square < x) {
                ans = mid; 
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }

        return ans;  

    }
};

int main() {
    Solution solution;
    //int x = 4;
    int x = 8;

    int result = solution.mySqrt(x);
    cout << result << endl;

    return 0;
}