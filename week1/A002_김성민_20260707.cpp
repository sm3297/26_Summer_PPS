#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {    
        vector<vector<int>> triangle(numRows);
        
        for (int i = 0; i < numRows; ++i) {
            triangle[i].resize(i + 1);
            triangle[i][0] = triangle[i][i] = 1;
            
            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; 
            }
        }
        return triangle;
    }
};

int main() {
    Solution solution;
    //int numRows = 5; 
    int numRows = 1; 
    vector<vector<int>> result = solution.generate(numRows);
    cout << "[";
    for (const auto& row : result) {
        cout << "[";
        for (size_t k = 0; k < row.size(); ++k) {  
            if(k == row.size() - 1) {
                cout << row[k]; 
            }
            else {
                cout << row[k] << ",";
            }
        }
        
        if(row.size() == 1) {
            cout << "]";
        }
        else if(row.size() > 1) {
            cout << "]";
        }
        if (&row != &result.back())  
            cout << ",";
    }
    cout << "]" << endl;
    
    return 0;
}