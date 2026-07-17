#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        for (int num1 : nums1) {
            auto it = find(nums2.begin(), nums2.end(), num1);
            if (it != nums2.end()) {
                int index = distance(nums2.begin(), it);
                int nextGreater = -1;
                for (int i = index + 1; i < nums2.size(); ++i) {
                    if (nums2[i] > num1) {
                        nextGreater = nums2[i];
                        break;
                    }
                }
                result.push_back(nextGreater);
            } else {
                result.push_back(-1);
            }
        }
        return result;

    }
};


int main(){

    Solution solution;
    // vector<int> nums1 = {4, 1, 2};
    // vector<int> nums2 = {1, 3, 4, 2};

    vector<int> nums1 = {2, 4};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> result = solution.nextGreaterElement(nums1, nums2);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}