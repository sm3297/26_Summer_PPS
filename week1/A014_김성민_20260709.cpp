#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> result;
        if (nums.empty()) return result;

        int start = nums[0];
        for (size_t i = 1; i <= nums.size(); ++i) {
            if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1]) {
                    result.push_back(to_string(start));
                } else {
                    result.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                }
                if (i < nums.size()) start = nums[i];
            }
        }
        return result;

    }
};

int main() {
    Solution solution;
    // vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<int> nums = {0, 2, 3, 4, 6, 8, 9};

    vector<string> result = solution.summaryRanges(nums);
    
    for (const string& range : result) {
        cout << "\"" << range << "\"" << " ";
    }
    cout << endl;

    return 0;
}