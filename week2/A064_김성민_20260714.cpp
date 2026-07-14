#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> expected = heights; 
        sort(expected.begin(), expected.end());

        int count = 0; 
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                count++; 
            }
        }
        return count; 

    }
};

int main() {
    Solution solution;
    // vector<int> heights = {1, 1, 4, 2, 1, 3};
    // vector<int> heights = {5, 1, 2, 3, 4};
    vector<int> heights = {1, 2, 3, 4, 5};

    int result = solution.heightChecker(heights);
    cout << result << endl; 

    return 0;
}