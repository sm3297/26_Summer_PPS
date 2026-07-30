#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int sumOddLengthSubarrays(vector<int> &arr) {
    int sum = 0;
    int n = arr.size();
    for (int len = 1; len <= n; len += 2) {
      for (int i = 0; i <= n - len; i++) {
        for (int j = i; j < i + len; j++) {
          sum += arr[j];
        }
      }
    }
    return sum;
  }
};

int main() {
  Solution sol;

  // 예제 1: 58
  vector<int> arr1 = {1, 4, 2, 5, 3};
  cout << sol.sumOddLengthSubarrays(arr1) << endl;

  // 예제 2: 3
  vector<int> arr2 = {1, 2};
  cout << sol.sumOddLengthSubarrays(arr2) << endl;

  // 예제 3: 66
  vector<int> arr3 = {10, 11, 12};
  cout << sol.sumOddLengthSubarrays(arr3) << endl;

  return 0;
}
