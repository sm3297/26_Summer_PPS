#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count = 0;
    int y_count = 0;

    for (char c : s) {
        if (c == 'p' || c == 'P') {
            p_count++;
        } 
        else if (c == 'y' || c == 'Y') {
            y_count++;
        }
    }
    if (p_count != y_count) {
        answer = false;
    }

    cout << "p count: " << p_count << endl;
    cout << "y count: " << y_count << endl;

    if (p_count == 0 && y_count == 0) {
        answer = true;
    }
    cout << "Hello Cpp" << endl;

    return answer;
}


int main(){

    string s;
    cout << "Enter a string: ";
    cin >> s;

    bool result = solution(s); 
    cout << (result ? "True" : "False") << endl; 

    return 0;
}
