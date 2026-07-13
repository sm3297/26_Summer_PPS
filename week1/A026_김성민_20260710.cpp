#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int sum = 0;
    int temp = x;

    while (temp > 0) {
        sum += temp % 10; 
        temp /= 10;      
    }
    if (x % sum != 0) {
        return false;
    }
    bool answer = true;
    return answer;
}


int main() {
    int x;
    scanf("%d", &x);
    bool result = solution(x);

    if (result) 
        printf("true\n");
    else
        printf("false\n");
    return 0;
}