#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(), g.end()); 
        sort(s.begin(), s.end()); 

        int childIndex = 0; 
        int cookieIndex = 0;
        int children = 0; 

        while (childIndex < g.size() && cookieIndex < s.size()) {
            if (s[cookieIndex] >= g[childIndex]) { 
                children++; 
                childIndex++;
            }
            cookieIndex++; 
        }

        return children;
        
    }
};

int main() {
    Solution solution;
    // vector<int> g = {1, 2, 3};
    // vector<int> s = {1, 1};

    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};

    int n = solution.findContentChildren(g, s);
    cout << n << endl; 

    return 0;
}