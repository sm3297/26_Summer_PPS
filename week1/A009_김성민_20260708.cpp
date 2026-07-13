#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    bool answer = true;
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    if (length != 4 && length != 6) {
        return false;
    }
    for (int i = 0; i < length; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false; 
        }
    }
    return answer;
}

int main() {
    const char* test1 = "a234";
    const char* test2 = "1234"; 

    printf("%s: %s\n", test1, solution(test1) ? "true" : "false");
    printf("%s: %s\n", test2, solution(test2) ? "true" : "false");

    return 0;
}