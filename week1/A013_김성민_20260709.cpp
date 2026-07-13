#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; 
        }
        return result;
    }
};

int main() {
    Solution solution;
    //vector<int> nums = {2, 2, 1}; 
    //vector<int> nums = {4, 1, 2, 1, 2}; 
    vector<int> nums = {1};
    int result = solution.singleNumber(nums);
    cout << result << endl; 
    
    return 0;
}