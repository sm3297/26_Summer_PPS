#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    int n = s.length();

    if (n == 1) {
        return 1; 
    }

    answer = n; 

    for (int i = 1; i <= n / 2; ++i) { 
        string compressed = "";
        string prev = s.substr(0, i); 
        int count = 1;

        for (int j = i; j < n; j += i) {
            string current = s.substr(j, i); 

            if (current == prev) {
                count++;
            } else {
                compressed += (count > 1 ? to_string(count) : "") + prev;
                prev = current;
                count = 1;
            }
        }

        compressed += (count > 1 ? to_string(count) : "") + prev;

        answer = min(answer, static_cast<int>(compressed.length()));
    }
    return answer;
}

int main() {
    string s;
    cin >> s;
    int result = solution(s);
    printf("%d\n", result); 
    
    return 0;
}