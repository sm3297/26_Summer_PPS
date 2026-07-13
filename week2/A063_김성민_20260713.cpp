#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        
        string result;
        int carry = 0; // 자리올림 변수
        int i = a.size() - 1, j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry; 

            if (i >= 0) {
                sum += a[i--] - '0'; 
            }
            if (j >= 0) {
                sum += b[j--] - '0'; 
            }

            result.push_back((sum % 2) + '0'); 
            carry = sum / 2; 
        }

        reverse(result.begin(), result.end()); 
        return result;

    }
};

int main() {
    Solution solution;
    // string a = "11"; 
    // string b = "1"; 
    string a = "1010"; 
    string b = "1011"; 
    string result = solution.addBinary(a, b);
    cout << result << endl; 
    return 0;
}