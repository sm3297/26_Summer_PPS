#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> result;

        for (int num = left; num <= right; ++num) {
            int original = num;
            bool isSelfDividing = true;

            while (num > 0) {
                int digit = num % 10;
                if (digit == 0 || original % digit != 0) {
                    isSelfDividing = false;
                    break;
                }
                num /= 10;
            }

            if (isSelfDividing) {
                result.push_back(original);
            }

            num = original;
        }
        return result;
    }
};

int main(){
    Solution solution;
    //int left = 1, right = 22;
    int left = 47, right = 85;
    vector<int> result = solution.selfDividingNumbers(left, right);

    cout << "[";
    for (int num : result) {
        cout << num << ",";
        if(num == result.back()) {
            cout << "\b"; 
        }
    }
    cout << "]" << endl;

    return 0;
}