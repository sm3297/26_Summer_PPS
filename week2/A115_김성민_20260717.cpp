#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int count[26] = {0};
        for (char c : text) {
            count[c - 'a']++;
        }
        return min({count['b' - 'a'], count['a' - 'a'], count['l' - 'a'] / 2, count['o' - 'a'] / 2, count['n' - 'a']});
    }
};

int main(){
    Solution sol;
    string text;

    cout << "text = ";
    cin >> text;
    int n = sol.maxNumberOfBalloons(text);
    cout << n << endl;
    
    return 0;
}