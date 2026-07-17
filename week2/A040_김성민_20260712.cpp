#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n = s.length();
        int mid = n / 2;
        int countA = 0, countB = 0;

        for (int i = 0; i < mid; ++i) {
            if (isVowel(s[i])) {
                countA++;
            }
            if (isVowel(s[mid + i])) {
                countB++;
            }
        }

        return countA == countB;

    }

private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};

int main() {
    Solution solution;
    //string s = "book";
    string s = "textbook";

    bool result = solution.halvesAreAlike(s);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

